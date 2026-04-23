"""MCQ App starter using KivyMD."""

from kivy.uix.screenmanager import ScreenManager
from kivymd.app import MDApp
from kivymd.uix.dialog import MDDialog

from auth import create_user, login
from db import init_db, seed_subjects
from ui.admin_panel import AdminPanelScreen
from ui.exam_screen import ExamScreen
from ui.login_screen import LoginScreen
from ui.result_screen import ResultScreen


class MCQApp(MDApp):
    dialog = None

    def build(self):
        self.title = "MCQ App MVP"
        self.theme_cls.primary_palette = "Blue"
        self._bootstrap_data()

        sm = ScreenManager()
        sm.app_login = self.app_login
        sm.add_widget(LoginScreen())
        sm.add_widget(AdminPanelScreen())
        sm.add_widget(ExamScreen())
        sm.add_widget(ResultScreen())
        return sm

    def _bootstrap_data(self):
        init_db()
        seed_subjects(["Math", "Science", "English", "ICT"])
        create_user("admin", "admin123", role="admin")

    def app_login(self, username: str, password: str) -> None:
        user = login(username, password)
        if not user:
            self._show_dialog("Login failed", "Invalid username or password")
            return

        self._show_dialog("Success", f"Welcome {user['username']} ({user['role']})")
        if user["role"] == "admin":
            self.root.current = "admin"
        else:
            self.root.current = "exam"

    def _show_dialog(self, title: str, text: str) -> None:
        if self.dialog:
            self.dialog.dismiss(force=True)
        self.dialog = MDDialog(title=title, text=text)
        self.dialog.open()


if __name__ == "__main__":
    MCQApp().run()
