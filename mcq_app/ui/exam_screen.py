"""Exam screen placeholder."""

from kivy.lang import Builder
from kivymd.uix.screen import MDScreen

KV = '''
<ExamScreen>:
    name: "exam"
    MDBoxLayout:
        orientation: "vertical"
        MDTopAppBar:
            title: "Exam"
        MDCard:
            padding: "16dp"
            pos_hint: {"center_x": .5, "center_y": .5}
            size_hint: .9, .4
            MDLabel:
                text: "Question rendering + timer will be implemented in Step 6"
                halign: "center"
'''

Builder.load_string(KV)


class ExamScreen(MDScreen):
    pass
