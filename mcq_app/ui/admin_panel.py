"""Admin panel placeholder screen."""

from kivy.lang import Builder
from kivymd.uix.screen import MDScreen

KV = '''
<AdminPanelScreen>:
    name: "admin"
    MDBoxLayout:
        orientation: "vertical"
        MDTopAppBar:
            title: "Admin Panel"
        MDLabel:
            text: "Next step: add subject + add question form"
            halign: "center"
'''

Builder.load_string(KV)


class AdminPanelScreen(MDScreen):
    pass
