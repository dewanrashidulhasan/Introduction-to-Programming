"""Admin panel screen for managing subjects and questions."""

from kivy.lang import Builder
from kivymd.uix.screen import MDScreen

KV = '''
<AdminPanelScreen>:
    name: "admin"
    ScrollView:
        MDBoxLayout:
            orientation: "vertical"
            spacing: "10dp"
            padding: "16dp"
            size_hint_y: None
            height: self.minimum_height

            MDTopAppBar:
                title: "Admin Panel"

            MDTextField:
                id: subject_name
                hint_text: "New subject name"

            MDRaisedButton:
                text: "Add Subject"
                on_release: root.add_subject(subject_name.text)

            MDTextField:
                id: subject_id
                hint_text: "Subject ID"

            MDTextField:
                id: q_text
                hint_text: "Question text"

            MDTextField:
                id: opt_a
                hint_text: "Option A"
            MDTextField:
                id: opt_b
                hint_text: "Option B"
            MDTextField:
                id: opt_c
                hint_text: "Option C"
            MDTextField:
                id: opt_d
                hint_text: "Option D"
            MDTextField:
                id: correct
                hint_text: "Correct option (A/B/C/D)"

            MDRaisedButton:
                text: "Add Question"
                on_release: root.add_question(
                    subject_id.text, q_text.text, opt_a.text, opt_b.text,
                    opt_c.text, opt_d.text, correct.text
                )

            MDRaisedButton:
                text: "Back to Login"
                on_release: app.root.current = "login"
'''

Builder.load_string(KV)


class AdminPanelScreen(MDScreen):
    def add_subject(self, subject_name: str) -> None:
        self.manager.app_add_subject(subject_name)

    def add_question(
        self,
        subject_id: str,
        q_text: str,
        opt_a: str,
        opt_b: str,
        opt_c: str,
        opt_d: str,
        correct: str,
    ) -> None:
        self.manager.app_add_question(subject_id, q_text, opt_a, opt_b, opt_c, opt_d, correct)
