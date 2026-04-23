"""MCQ App starter using KivyMD."""

from __future__ import annotations

from kivy.uix.screenmanager import ScreenManager
from kivymd.app import MDApp
from kivymd.uix.dialog import MDDialog

from auth import create_user, login
from db import add_question, add_subject, init_db, seed_subjects
from exam_engine import calculate_result, load_random_questions, save_result
from ui.admin_panel import AdminPanelScreen
from ui.exam_screen import ExamScreen
from ui.login_screen import LoginScreen
from ui.result_screen import ResultScreen


class MCQApp(MDApp):
    dialog = None

    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.current_user = None
        self.current_subject_id = None
        self.current_questions = []

    def build(self):
        self.title = "MCQ App MVP"
        self.theme_cls.primary_palette = "Blue"
        self._bootstrap_data()

        sm = ScreenManager()
        sm.app_login = self.app_login
        sm.app_register_student = self.app_register_student
        sm.app_add_subject = self.app_add_subject
        sm.app_add_question = self.app_add_question
        sm.app_load_exam = self.app_load_exam
        sm.app_submit_exam = self.app_submit_exam

        sm.add_widget(LoginScreen())
        sm.add_widget(AdminPanelScreen())
        sm.add_widget(ExamScreen())
        sm.add_widget(ResultScreen())
        return sm

    def _bootstrap_data(self):
        init_db()
        seed_subjects(["Math", "Science", "English", "ICT"])
        create_user("admin", "admin123", role="admin")

    def app_register_student(self, username: str, password: str) -> None:
        if not username.strip() or not password.strip():
            self._show_dialog("Validation", "Username and password required")
            return

        created = create_user(username, password, role="student")
        if not created:
            self._show_dialog("Failed", "Username already exists")
            return

        self._show_dialog("Success", "Student account created")

    def app_login(self, username: str, password: str) -> None:
        user = login(username, password)
        if not user:
            self._show_dialog("Login failed", "Invalid username or password")
            return

        self.current_user = user
        self._show_dialog("Success", f"Welcome {user['username']} ({user['role']})")
        if user["role"] == "admin":
            self.root.current = "admin"
        else:
            self.root.current = "exam"

    def app_add_subject(self, subject_name: str) -> None:
        if not self.current_user or self.current_user["role"] != "admin":
            self._show_dialog("Denied", "Only admin can add subjects")
            return

        if not subject_name.strip():
            self._show_dialog("Validation", "Subject name required")
            return

        if add_subject(subject_name):
            self._show_dialog("Success", "Subject added")
        else:
            self._show_dialog("Notice", "Subject already exists")

    def app_add_question(
        self,
        subject_id: str,
        q_text: str,
        opt_a: str,
        opt_b: str,
        opt_c: str,
        opt_d: str,
        correct: str,
    ) -> None:
        if not self.current_user or self.current_user["role"] != "admin":
            self._show_dialog("Denied", "Only admin can add questions")
            return

        if not (subject_id.isdigit() and q_text.strip() and opt_a.strip() and opt_b.strip() and opt_c.strip() and opt_d.strip()):
            self._show_dialog("Validation", "All fields are required")
            return

        if correct.strip().upper() not in {"A", "B", "C", "D"}:
            self._show_dialog("Validation", "Correct option must be A/B/C/D")
            return

        add_question(
            int(subject_id),
            q_text,
            opt_a,
            opt_b,
            opt_c,
            opt_d,
            correct,
            self.current_user["id"],
        )
        self._show_dialog("Success", "Question added")

    def app_load_exam(self, subject_id: str) -> None:
        if not self.current_user or self.current_user["role"] != "student":
            self._show_dialog("Denied", "Only student can load exam")
            return

        if not subject_id.isdigit():
            self._show_dialog("Validation", "Subject ID must be numeric")
            return

        self.current_subject_id = int(subject_id)
        self.current_questions = load_random_questions(self.current_subject_id, limit=5)

        if not self.current_questions:
            self._show_dialog("No Data", "No question found for this subject")
            return

        lines = ["Loaded questions:"]
        for q in self.current_questions:
            lines.append(f"{q['id']}: {q['question_text']}")
        self.root.get_screen("exam").ids.info.text = "\n".join(lines)

    def app_submit_exam(self, answer_text: str) -> None:
        if not self.current_questions:
            self._show_dialog("Validation", "Load questions first")
            return

        answers = {}
        for pair in [p.strip() for p in answer_text.split(",") if p.strip()]:
            if ":" not in pair:
                continue
            qid_text, option = pair.split(":", maxsplit=1)
            if qid_text.strip().isdigit():
                answers[int(qid_text.strip())] = option.strip().upper()

        result = calculate_result(self.current_questions, answers)
        save_result(self.current_user["id"], self.current_subject_id, result)

        result_text = (
            f"Total: {result['total_questions']}\n"
            f"Correct: {result['correct_answers']}\n"
            f"Score: {result['score_percent']}%"
        )
        self.root.get_screen("result").show_result(result_text)
        self.root.current = "result"

    def _show_dialog(self, title: str, text: str) -> None:
        if self.dialog:
            self.dialog.dismiss(force=True)
        self.dialog = MDDialog(title=title, text=text)
        self.dialog.open()


if __name__ == "__main__":
    MCQApp().run()
