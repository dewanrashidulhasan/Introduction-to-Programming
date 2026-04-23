"""Exam logic for selecting questions and evaluating answers."""

from __future__ import annotations

import random

from db import get_connection


def load_random_questions(subject_id: int, limit: int = 10) -> list[dict]:
    with get_connection() as conn:
        rows = conn.execute(
            """
            SELECT id, question_text, option_a, option_b, option_c, option_d, correct_option
            FROM questions
            WHERE subject_id = ?
            """,
            (subject_id,),
        ).fetchall()

    questions = [dict(r) for r in rows]
    random.shuffle(questions)
    return questions[:limit]


def calculate_result(questions: list[dict], answers: dict[int, str]) -> dict:
    total = len(questions)
    correct = 0
    for q in questions:
        if answers.get(q["id"], "").upper() == q["correct_option"]:
            correct += 1

    percent = (correct / total * 100) if total else 0
    return {
        "total_questions": total,
        "correct_answers": correct,
        "score_percent": round(percent, 2),
    }


def save_result(user_id: int, subject_id: int, result: dict) -> None:
    with get_connection() as conn:
        conn.execute(
            """
            INSERT INTO exam_results(
                user_id, subject_id, total_questions, correct_answers, score_percent
            )
            VALUES (?, ?, ?, ?, ?)
            """,
            (
                user_id,
                subject_id,
                result["total_questions"],
                result["correct_answers"],
                result["score_percent"],
            ),
        )
