# Student Profile & Skill Progression: ft_printf

## Student Information
- **Student**: `aait-lac` (42 / 1337 Network - Rabat)
- **Project**: `ft_printf` (Rank 1)
- **Repository**: `git@github.com:1imaade/ft_printf---Workspace.git`
- **Methodology**: Strict Socratic Mentorship & First-Principles Systems Engineering.
- **Pledge & Rule**: ZERO spoon-fed code. AI never completes student logic. The student designs and writes 100% of the code, headers, and Makefiles. Mentor acts strictly as evaluator/challenger.

---

## Skill & Knowledge Gates

| Gate | Competency Area | Status | Target Mastery |
| :---: | :--- | :---: | :--- |
| **Gate 0** | **Libft & C Low-Level Foundations Audit** | 🟢 **MASTERED** | Memory physical model, byte-addressable RAM, pointers, pointer arithmetic, `void *` casting, array decay, multi-level indirection (`char **`). |
| **Gate 1** | **Variadic Arguments & Stack Physics** | 🟢 **MASTERED** | Hardware ABI (`rdi`..`r9`, `xmm0`..`xmm7`, Stack), `va_list` internal struct (`reg_save_area`, `gp_offset`, `overflow_arg_area`), default argument promotions (40/40 defense passed). |
| **Gate 2** | **Formatting Parser Architecture** | 🟡 **NEXT** | Clean dispatch table / state machine for format specifiers (`%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`). |
| **Gate 3** | **Hexadecimal & Base Conversions** | 🔒 LOCKED | Recursive vs iterative base printing, 64-bit unsigned `uintptr_t` pointer addresses. |
| **Gate 4** | **Return Value & Error Handling Invariants** | 🔒 LOCKED | Tracking write byte count accurately; propagating `-1` if `write()` fails. |
| **Gate 5** | **Live Coding & Evaluation Defense** | 🔒 LOCKED | Ability to explain every format handler and recode specifiers live. |

---

## Active Notes & Diagnostic Log
- **2026-11-22**: 
  - Oral Theory Defense: **40/40 (Passed)**.
  - Student demonstrated exact grasp of promotion mechanics (`char` -> `int`), pointer arithmetic byte strides (1B vs 4B vs 8B), and the memory physics of `va_list`.
  - Gate 1 officially cleared.
