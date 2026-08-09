"""Exam screen with basic answer submission."""

from kivy.lang import Builder
from kivymd.uix.screen import MDScreen

KV = '''
<ExamScreen>:
    name: "exam"
    ScrollView:
        MDBoxLayout:
            orientation: "vertical"
            spacing: "10dp"
            padding: "16dp"
            size_hint_y: None
            height: self.minimum_height

            MDTopAppBar:
                title: "Exam"

            MDLabel:
                id: info
                text: "Enter Subject ID and press Load"
                halign: "center"

            MDTextField:
                id: subject_id
                hint_text: "Subject ID"

            MDRaisedButton:
                text: "Load Random 5 Questions"
                on_release: root.load_exam(subject_id.text)

            MDLabel:
                text: "Answer format: 12:A,13:C,14:B"
                halign: "left"

            MDTextField:
                id: answer_text
                hint_text: "QuestionID:Option pairs"

            MDRaisedButton:
                text: "Submit Exam"
                on_release: root.submit_exam(answer_text.text)

            MDRaisedButton:
                text: "Back to Login"
                on_release: app.root.current = "login"
'''

Builder.load_string(KV)


class ExamScreen(MDScreen):
    def load_exam(self, subject_id: str) -> None:
        self.manager.app_load_exam(subject_id)

    def submit_exam(self, answer_text: str) -> None:
        self.manager.app_submit_exam(answer_text)
