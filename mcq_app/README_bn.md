# MCQ App (Kivy + KivyMD) — Step-by-step Starter

এই starter package-এ **Step-by-step (Option B)** approach ফলো করা হয়েছে, যাতে তুমি শেখার সাথে সাথে app build করতে পারো।

## 1) Problem Explanation

তোমার goal হলো এমন একটি MCQ app তৈরি করা যেখানে:
- এক ডিভাইসে multiple user login করতে পারবে।
- admin প্রশ্ন যোগ করতে পারবে।
- student exam দিতে পারবে এবং result save হবে।
- UI হবে modern (KivyMD style)।

## 2) Important vs Not Important

✅ গুরুত্বপূর্ণ:
- secure login (bcrypt hash)
- SQLite schema ঠিকভাবে define করা
- role-based flow (admin/student)
- future-ready modular structure

❌ এখনই গুরুত্বপূর্ণ না:
- animation-heavy UI polish
- cloud sync
- real-time leaderboard

Alternative approaches:
- **Tkinter**: সহজ, কিন্তু mobile-like modern design দুর্বল।
- **PyQt**: powerful, কিন্তু setup heavier; Android target awkward।
- **Web app (Django/Flask)**: scalable, কিন্তু offline desktop/mobile local app focus থেকে বের হয়ে যায়।

## 3) Step-by-step Logic

1. `db.py` database initialize করে।
2. `auth.py` user create/login handle করে (bcrypt দিয়ে)।
3. `main.py` app bootstrap করে, screens register করে।
4. login success হলে role দেখে admin বা exam screen এ পাঠায়।
5. `exam_engine.py` random question, result calculation, save logic ধরে।

## 4) Visual Flow

| Step | Action | Output |
|---|---|---|
| 1 | App start | DB + default subjects + admin seed |
| 2 | User login | role check |
| 3A | admin | Admin Panel |
| 3B | student | Exam Screen |
| 4 | Exam submit | Score + DB save |

## 5) Run

```bash
pip install kivy kivymd bcrypt
python main.py
```

Default seeded admin:
- username: `admin`
- password: `admin123`

## 6) Why this method

- Brute force style এক ফাইলে সব লিখলে maintain করা কঠিন হয়।
- এই modular design-এ testing, debugging, scaling — সব সহজ।

## 7) Next Increment

- Admin UI-তে question form add করা।
- Exam timer + next/prev + answer review add করা।
- Result screen-এ detailed breakdown দেখানো।
