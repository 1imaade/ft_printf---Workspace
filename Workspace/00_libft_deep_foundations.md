# Gate 0: Low-Level C & Libft Systems Audit

This gate must be unlocked before touching `ft_printf`. Every concept will be questioned, broken down to memory/assembly level, and verified by the student.

---

## The 5 Pillars of Low-Level C

### Pillar 1: Bits, Bytes, and Memory Representation
- How RAM is structured (addresses, bytes, alignment).
- Signed vs Unsigned (Two's complement, sign bit, MSB/LSB).
- Why `INT_MIN = -2147483648` and `INT_MAX = 2147483647`.
- The real physical difference between `0`, `'0'`, `'\0'`, and `NULL`.

### Pillar 2: Pointers and Pointer Arithmetic
- What a pointer variable is in hardware (64-bit unsigned address on x86_64).
- Dereferencing (`*p`) and Address-of (`&x`).
- Pointer arithmetic: why `ptr + 1` moves by `sizeof(*ptr)` bytes.
- Array notation `a[i]` is identical to `*(a + i)`.

### Pillar 3: Raw Memory vs Strings (`void *` vs `char *`)
- Why `memcpy` takes `void *` and casts to `unsigned char *`.
- Null-termination (`\0`) contract in strings vs fixed-size buffers in memory functions.
- Overlapping memory and why `memmove` is required.

### Pillar 4: Stack vs Heap & Pointer Lifetimes
- Stack frames, activation records, local variables.
- Why returning a pointer to a local variable causes undefined behavior.
- Heap allocation (`malloc`), OS memory pages, metadata headers, `free()`.
- Memory leaks, double free, and use-after-free.

### Pillar 5: Multi-Level Indirection (`char **`, Double Pointers)
- How `split` / arrays of strings work in memory.
- Pointers to pointers.
- Modifying a pointer inside a function (`void modify(t_list **head)`).
