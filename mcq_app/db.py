"""Database layer for MCQ app MVP."""

from __future__ import annotations

import sqlite3
from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent
DATA_DIR = BASE_DIR / "data"
DB_PATH = DATA_DIR / "app.db"


def get_connection() -> sqlite3.Connection:
    """Return a SQLite connection with row access by column name."""
    DATA_DIR.mkdir(parents=True, exist_ok=True)
    conn = sqlite3.connect(DB_PATH)
    conn.row_factory = sqlite3.Row
    conn.execute("PRAGMA foreign_keys = ON")
    return conn


def init_db() -> None:
    """Create tables for users, subjects, questions, and exam results."""
    with get_connection() as conn:
        conn.executescript(
            """
            CREATE TABLE IF NOT EXISTS users (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                username TEXT UNIQUE NOT NULL,
                password_hash TEXT NOT NULL,
                role TEXT NOT NULL CHECK (role IN ('admin', 'student')),
                created_at TEXT DEFAULT CURRENT_TIMESTAMP
            );

            CREATE TABLE IF NOT EXISTS subjects (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT UNIQUE NOT NULL,
                created_at TEXT DEFAULT CURRENT_TIMESTAMP
            );

            CREATE TABLE IF NOT EXISTS questions (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                subject_id INTEGER NOT NULL,
                question_text TEXT NOT NULL,
                option_a TEXT NOT NULL,
                option_b TEXT NOT NULL,
                option_c TEXT NOT NULL,
                option_d TEXT NOT NULL,
                correct_option TEXT NOT NULL CHECK (correct_option IN ('A', 'B', 'C', 'D')),
                created_by INTEGER,
                created_at TEXT DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (subject_id) REFERENCES subjects(id) ON DELETE CASCADE,
                FOREIGN KEY (created_by) REFERENCES users(id) ON DELETE SET NULL
            );

            CREATE TABLE IF NOT EXISTS exam_results (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                user_id INTEGER NOT NULL,
                subject_id INTEGER NOT NULL,
                total_questions INTEGER NOT NULL,
                correct_answers INTEGER NOT NULL,
                score_percent REAL NOT NULL,
                submitted_at TEXT DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE,
                FOREIGN KEY (subject_id) REFERENCES subjects(id) ON DELETE CASCADE
            );
            """
        )


def seed_subjects(subject_names: list[str]) -> None:
    """Insert default subjects if not already present."""
    with get_connection() as conn:
        conn.executemany(
            "INSERT OR IGNORE INTO subjects(name) VALUES (?)",
            [(name.strip(),) for name in subject_names if name.strip()],
        )


def get_subjects() -> list[sqlite3.Row]:
    with get_connection() as conn:
        return conn.execute("SELECT id, name FROM subjects ORDER BY name").fetchall()


def add_subject(name: str) -> bool:
    try:
        with get_connection() as conn:
            conn.execute("INSERT INTO subjects(name) VALUES (?)", (name.strip(),))
        return True
    except sqlite3.IntegrityError:
        return False


def add_question(
    subject_id: int,
    question_text: str,
    option_a: str,
    option_b: str,
    option_c: str,
    option_d: str,
    correct_option: str,
    created_by: int | None,
) -> None:
    with get_connection() as conn:
        conn.execute(
            """
            INSERT INTO questions(
                subject_id, question_text, option_a, option_b, option_c, option_d,
                correct_option, created_by
            ) VALUES (?, ?, ?, ?, ?, ?, ?, ?)
            """,
            (
                subject_id,
                question_text.strip(),
                option_a.strip(),
                option_b.strip(),
                option_c.strip(),
                option_d.strip(),
                correct_option.strip().upper(),
                created_by,
            ),
        )


def get_questions_for_subject(subject_id: int) -> list[sqlite3.Row]:
    with get_connection() as conn:
        return conn.execute(
            """
            SELECT id, question_text, option_a, option_b, option_c, option_d, correct_option
            FROM questions
            WHERE subject_id = ?
            ORDER BY id DESC
            """,
            (subject_id,),
        ).fetchall()


def get_user_results(user_id: int) -> list[sqlite3.Row]:
    with get_connection() as conn:
        return conn.execute(
            """
            SELECT er.id, s.name AS subject_name, er.total_questions,
                   er.correct_answers, er.score_percent, er.submitted_at
            FROM exam_results er
            JOIN subjects s ON s.id = er.subject_id
            WHERE er.user_id = ?
            ORDER BY er.id DESC
            """,
            (user_id,),
        ).fetchall()
