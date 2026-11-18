# 02: Edge Cases, Traps & Undefined Behavior in `ft_printf`

## 1. The `NULL` String Trap (`%s`)
- **Call**: `ft_printf("%s\n", (char *)NULL);`
- **Linux glibc behavior**: Prints `(null)` and outputs 6 characters.
- **Trap**: Attempting to dereference `NULL` directly crashes with Segfault. You must check `if (!s) s = "(null)";`.

---

## 2. The `NULL` Pointer Trap (`%p`)
- **Call**: `ft_printf("%p\n", NULL);`
- **Linux glibc behavior**: Prints `(nil)` (or `0x0` depending on architecture/OS). Check your campus OS standard!
- **Trap**: For non-NULL pointers, you must always prepend `0x` before the hex digits.

---

## 3. The `INT_MIN` Trap (`%d` / `%i`)
- **Value**: `-2147483648`
- **Trap**: Negating `INT_MIN` directly (`-n`) results in signed integer overflow because `+2147483648` cannot fit in a 32-bit signed `int` (max is `2147483647`).
- **Fix**: Cast to `long` or handle `INT_MIN` explicitly.

---

## 4. The Default Argument Promotions Trap
- In C variadic functions, small integer types undergo promotion:
  - `char` and `short` are promoted to `int`.
  - `float` is promoted to `double`.
- **Trap**: Calling `va_arg(ap, char)` is **ILLEGAL** in C and causes undefined behavior / compiler warnings. You must extract it as `(char)va_arg(ap, int)`.

---

## 5. Negative / Failed `write()` Return Trap
- If `write(1, ...)` fails (e.g. broken pipe or invalid file descriptor), `write` returns `-1`.
- `ft_printf` must return `-1` to signal the error, not continue printing.
