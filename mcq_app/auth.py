"""Authentication helpers for user management."""

from __future__ import annotations

import sqlite3

import bcrypt

from db import get_connection


def hash_password(password: str) -> str:
    """Generate bcrypt hash for plain password."""
    hashed = bcrypt.hashpw(password.encode("utf-8"), bcrypt.gensalt())
    return hashed.decode("utf-8")


def verify_password(password: str, password_hash: str) -> bool:
    """Verify plain password against bcrypt hash."""
    return bcrypt.checkpw(password.encode("utf-8"), password_hash.encode("utf-8"))


def create_user(username: str, password: str, role: str = "student") -> bool:
    """Create user. Returns False if username already exists."""
    if role not in {"admin", "student"}:
        raise ValueError("Role must be admin or student")

    try:
        with get_connection() as conn:
            conn.execute(
                "INSERT INTO users(username, password_hash, role) VALUES (?, ?, ?)",
                (username.strip(), hash_password(password), role),
            )
        return True
    except sqlite3.IntegrityError:
        return False


def login(username: str, password: str) -> dict | None:
    """Authenticate user and return user info dict when valid."""
    with get_connection() as conn:
        row = conn.execute(
            "SELECT id, username, password_hash, role FROM users WHERE username = ?",
            (username.strip(),),
        ).fetchone()

    if not row:
        return None

    if not verify_password(password, row["password_hash"]):
        return None

    return {"id": row["id"], "username": row["username"], "role": row["role"]}
