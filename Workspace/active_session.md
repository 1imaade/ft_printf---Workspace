# Active Mentor Session State (Sync Anchor)

## Metadata
- **Student**: `aait-lac` (1337 Rabat)
- **Project**: `ft_printf` (Rank 1)
- **Last Sync**: 2026-11-23T16:40:00Z
- **Current Machine**: Station Desktop Setup
- **Status**: Day 2 Architecture & Prototyping (In Progress)

---

## Evaluation Results: Day 1 Defense
- **Q1 (Calling Convention & Hardware)**: 10/10 — GP registers (`rdi`..`r9`), Stack overflow, `overflow_arg_area`.
- **Q2 (Default Argument Promotions)**: 10/10 (Retake) — `char`/`short` promoted to `int`, `va_arg(args, int)` rule locked.
- **Q3 (Pointer Strides)**: 10/10 — 1 byte on `void *` vs 4 bytes on `int *`.
- **Q4 (Double Pointer Alignment Trap)**: 10/10 (Retake) — 1 byte slice vs 8-byte pointer stride explained with exact bytes.
- **FINAL DEFENSE SCORE**: **40 / 40 (PASS)**.

---

## Day 2 Progress & Current Snapshot
- **Files Created/Modified**:
  - `ft_printf/Makefile` (compiles `libftprintf.a`)
  - `ft_printf/ft_printf.h`
  - `ft_printf/ft_printf.c` (initial parser loop skeleton)
  - `ft_printf/ft_putchar.c`, `ft_printf/ft_putstr.c`, `ft_printf/ft_putnbr.c`
  - `ft_printf/main.c` (test runner)

- **Upcoming Mentor Challenges & Traps to Solve**:
  1. **Directory Structure**: 42 Norm & Moulinette expect root `Makefile` compiling `libftprintf.a` at the root.
  2. **Byte Count Accumulation**: `printf` returns `int` (total bytes written or `< 0` on write error). Current functions return `void` and `ft_printf` returns `0`.
  3. **Variadic Extraction**: Integrating `va_arg` correctly with promotions (replacing hardcoded test literals).
  4. **Specifier Routing / Dispatch**: Modular parser vs chained `if/else`.
  5. **Traps on the Radar**: `NULL` `%s`, `INT_MIN` in `ft_putnbr`, `write()` return check.
