"""Login screen widget."""

from kivy.lang import Builder
from kivymd.uix.screen import MDScreen

KV = '''
<LoginScreen>:
    name: "login"
    MDBoxLayout:
        orientation: "vertical"
        spacing: "12dp"
        padding: "16dp"

        MDTopAppBar:
            title: "MCQ App Login"

        MDTextField:
            id: username
            hint_text: "Username"

        MDTextField:
            id: password
            hint_text: "Password"
            password: True

        MDRaisedButton:
            text: "Login"
            pos_hint: {"center_x": .5}
            on_release: root.handle_login(username.text, password.text)

        MDRaisedButton:
            text: "Register as Student"
            pos_hint: {"center_x": .5}
            on_release: root.handle_register(username.text, password.text)
'''

Builder.load_string(KV)


class LoginScreen(MDScreen):
    def handle_login(self, username: str, password: str) -> None:
        self.manager.app_login(username, password)

    def handle_register(self, username: str, password: str) -> None:
        self.manager.app_register_student(username, password)
