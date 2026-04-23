"""Result screen placeholder."""

from kivy.lang import Builder
from kivymd.uix.screen import MDScreen

KV = '''
<ResultScreen>:
    name: "result"
    MDBoxLayout:
        orientation: "vertical"
        MDTopAppBar:
            title: "Result"
        MDLabel:
            id: result_label
            text: "No result yet"
            halign: "center"
'''

Builder.load_string(KV)


class ResultScreen(MDScreen):
    def show_result(self, text: str) -> None:
        self.ids.result_label.text = text
