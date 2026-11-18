# 01: System Architecture & Variadic Mechanics (`ft_printf`)

## 1. What are Variadic Functions?
In C, functions usually have a fixed number of parameters. A variadic function can accept an arbitrary number of arguments:
```c
int ft_printf(const char *format, ...);
```
The ellipsis `...` signals to the compiler that zero or more arguments follow `format`.

---

## 2. The Hardware Reality: How Arguments are Passed
On modern x86_64 Linux systems (System V AMD64 ABI):
- The first 6 integer/pointer arguments are passed in registers:
  1. `RDI` (holds `format`)
  2. `RSI` (holds argument 1)
  3. `RDX` (holds argument 2)
  4. `RCX` (holds argument 3)
  5. `R8`  (holds argument 4)
  6. `R9`  (holds argument 5)
- Arguments beyond the 6th are pushed onto the **Stack** in reverse order.

---

## 3. The `<stdarg.h>` Macros

| Macro | Prototype | Role / Physical Mechanism |
| :--- | :--- | :--- |
| `va_list` | Type | A pointer/state structure tracking the current position in the argument list. |
| `va_start(ap, last_arg)` | Macro | Initializes `ap` to point to the first variable argument immediately following `last_arg` (`format`). |
| `va_arg(ap, type)` | Macro | **Extracts the current argument as `type`** and advances the internal `ap` pointer by `sizeof(type)` (accounting for alignment/default promotions). |
| `va_end(ap)` | Macro | Cleans up the `va_list` pointer/state. Essential for memory and stack hygiene. |

---

## 4. The 9 Mandatory Conversions
1. `%c`: A single character.
2. `%s`: A string (char *).
3. `%p`: A pointer address in hexadecimal (`0x...`).
4. `%d`: A signed decimal integer (base 10).
5. `%i`: A signed integer in base 10.
6. `%u`: An unsigned decimal integer (base 10).
7. `%x`: A number in lowercase hexadecimal (base 16).
8. `%X`: A number in uppercase hexadecimal (base 16).
9. `%%`: A literal percent sign.
