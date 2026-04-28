# MCQ App (Kivy + KivyMD) — কম্পিউটার setup থেকে 100% রান পর্যন্ত সম্পূর্ণ গাইড

এই গাইডটি একদম beginner friendly। তুমি নতুন কম্পিউটার সেটআপ থেকে শুরু করে, folder/file তৈরি, কোড লেখা, run, test, debug, এবং build (Windows EXE / Android APK) পর্যন্ত পুরো flow পাবে।

---

## 1) Problem Explanation

### সমস্যা কী?
তোমাকে এমন একটি অ্যাপ বানাতে হবে যেখানে,
- একই ডিভাইসে একাধিক user account থাকবে।
- Admin প্রশ্ন (MCQ) এবং subject যোগ করতে পারবে।
- Student login করে exam দিতে পারবে।
- Exam শেষে score গণনা হবে, result database-এ save হবে।
- UI দেখতে modern হবে (KivyMD ব্যবহার করে)।

### Goal
একটি **local offline**, **multi-user**, **role-based MCQ app** তৈরি করা।

### Input
- Username, password, role (admin/student)।
- Admin ইনপুট: subject name, question + 4 option + correct option।
- Student ইনপুট: subject id, answer mapping (`qid:option`)।

### Output
- Login success/fail।
- Admin data save confirmation।
- Student exam score (`total`, `correct`, `percent`)।

---

## 2) Important vs Not Important

✅ **অবশ্যই করতে হবে**
- SQLite schema ঠিকভাবে তৈরি করা।
- Password plaintext না রেখে bcrypt hash করা।
- Admin/Student role-based access control রাখা।
- Question load + result calculate + save flow ঠিক রাখা।

❌ **এখন না করলেও চলবে**
- Fancy animation বা complex theme engine।
- Cloud sync / online backup।
- Live leaderboard / analytics dashboard।

### Alternative approaches (কেন নেওয়া হয়নি)
1. **Tkinter**: সহজ, কিন্তু mobile-app ধরনের modern UI কম।
2. **PyQt/PySide**: powerful, কিন্তু dependency + deployment complexity বেশি।
3. **Django/Flask web**: scalable, কিন্তু local offline desktop-first goal থেকে সরে যায়।

---

## 3) Step-by-Step Logic

### Phase A: Computer Setup
1. Python 3.10+ install করো।
2. Terminal খুলে version check করো:
   ```bash
   python --version
   pip --version
   ```
3. Project folder-এ যাও:
   ```bash
   cd mcq_app
   ```
4. Virtual environment create + activate করো:
   ```bash
   python -m venv .venv
   # Windows PowerShell
   .venv\Scripts\Activate.ps1
   # Linux/macOS
   source .venv/bin/activate
   ```
5. Dependency install:
   ```bash
   pip install -r requirements.txt
   ```

### Phase B: Project Structure
```
mcq_app/
├── main.py
├── db.py
├── auth.py
├── exam_engine.py
├── requirements.txt
├── README_bn.md
├── data/
│   └── app.db (auto তৈরি হবে)
└── ui/
    ├── login_screen.py
    ├── admin_panel.py
    ├── exam_screen.py
    └── result_screen.py
```

### Phase C: Runtime Flow
1. `main.py` চালু হয়।
2. `init_db()` schema তৈরি করে।
3. default subjects seed হয়, admin account (`admin/admin123`) থাকে।
4. login/register screen দেখায়।
5. Admin হলে admin panel। Student হলে exam panel।
6. Student exam submit করলে score calculate + DB save + result screen show।

---

## 4) Visual Explanation

### Login → Role Routing
| Input | DB Verify | Role | Next Screen |
|---|---|---|---|
| user/pass ভুল | fail | - | Login-এই থাকে |
| admin/admin123 | success | admin | Admin Panel |
| student account | success | student | Exam Screen |

### Exam Result Calculation Example
ধরি ৫টা প্রশ্ন load হয়েছে।

| QID | Correct | Student দিলো | Match? |
|---|---|---|---|
| 11 | A | A | ✅ |
| 12 | C | B | ❌ |
| 13 | D | D | ✅ |
| 14 | B | B | ✅ |
| 15 | C | A | ❌ |

- Total = 5
- Correct = 3
- Score = 3/5 × 100 = 60%

---

## 5) Test Case Walkthrough

### Test Case 1: Register + Student Login
1. username=`rahim`, password=`1234` দিয়ে register।
2. DB-তে নতুন row তৈরি হবে, password hash আকারে থাকবে।
3. একই credential দিয়ে login → exam screen এ যাবে।

### Test Case 2: Admin adds subject + question
1. `admin/admin123` login।
2. `Add Subject` এ `Bangla` দাও।
3. `Subject ID` দিয়ে question add করো (`correct=A/B/C/D`)।
4. Success dialog পাবে।

### Test Case 3: Student exam submit
1. Subject ID দিয়ে questions load।
2. answer format: `12:A,13:C,14:B` লিখে submit।
3. Result screen এ total, correct, percent দেখাবে।
4. DB-র `exam_results` table-এ নতুন row save হবে।

---

## 6) Why This Method is Better

### Brute force (এক ফাইলে সব)
- দ্রুত শুরু করা যায়।
- কিন্তু code maintain/extend/debug কঠিন।

### Current modular approach
- `db.py`, `auth.py`, `exam_engine.py`, `ui/*` আলাদা।
- unit testing সহজ।
- role-based permission এবং data flow স্পষ্ট।
- future features (timer, leaderboard) add করা সহজ।

---

## 7) Intuition (সহজ analogy)

এই app-টাকে একটি coaching center মনে করো।
- `db.py` = office register book।
- `auth.py` = gate security (ID check)।
- `admin_panel.py` = teachers’ desk (question set)।
- `exam_screen.py` = exam hall।
- `result_screen.py` = marksheet board।

সবকিছু আলাদা রুমে থাকলে পরিচালনা সহজ হয়, গুলিয়ে যায় না।

---

## 8) Code + Run Commands

### Run
```bash
cd mcq_app
python main.py
```

### Default admin
- username: `admin`
- password: `admin123`

### Syntax check
```bash
python -m py_compile main.py db.py auth.py exam_engine.py ui/login_screen.py ui/admin_panel.py ui/exam_screen.py ui/result_screen.py
```

---

## Reality Check (No sugar-coating)

- Kivy/KivyMD beginner-এর জন্য শুরুতে কঠিন লাগবে।
- Android build (Buildozer) Linux environment ছাড়া pain point হতে পারে।
- Windows EXE build তুলনামূলক সহজ, কিন্তু anti-virus false positive হতে পারে।
- production level security চাইলে input validation, audit logging, SQL migration, backup strategy আরও যোগ করতে হবে।

তাই এই codebase হলো **working MVP + learning roadmap**, final enterprise version না।
