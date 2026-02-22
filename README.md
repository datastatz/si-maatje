**Learning some C for embedded stuff, loev het maatje**

---

## C learning roadmap (basic understanding)

### Phase 1: Setup and core language

1. **1 Foreword** — 1.3 Platform and Compiler, 1.4 Homepage. Get a compiler and know where the book lives.
2. **2.1 Background** — Comments, Separators, Expressions, Statements, Booleans, Blocks. How C code is structured.
3. **2.3 Type Specifiers** + **2.4 Constant Types** — `int`, `float`, `char`, literals.
4. **2.2 Operators** — 2.2.1 Arithmetic, 2.2.2 Increment/Decrement, 2.2.3 Comparison, 2.2.8 Assignment, 2.2.9 sizeof, 2.2.10 Type Casts. Enough to write and read expressions.
5. **2.5 Composite Types** — 2.5.1 struct, 2.5.3 enum (union later). Basic data structures.
6. **2.6 Initializers** — How to initialize variables and structs.
7. **2.10–2.18** — if, for, while, do-while, switch, break, continue, return. Control flow and loops.
8. **2.20 Functions** — especially 2.20.1 main(). Writing and calling functions.

### Phase 2: Essential standard library

9. **23 &lt;stdio.h&gt;** — 23.10 printf/fprintf/sprintf/snprintf, 23.11 scanf/fscanf/sscanf, 23.5 fclose, 23.7 fopen, 23.14–23.17 get/put, 23.19–23.20 fread/fwrite. Input/output and files.
10. **26 &lt;string.h&gt;** — 26.2 strcpy/strncpy, 26.5 strcmp/strncmp, 26.8 strchr, 26.15 strlen, 26.13 memset. String and memory basics.
11. **24 &lt;stdlib.h&gt;** — 24.2–24.5 number conversion (atoi, strtol, etc.), 24.9–24.11 malloc/calloc/free/realloc, 24.14 exit. Memory and program control.

### Phase 3: A bit more depth (still "basic")

12. **2.2.4 Pointer Operators** — Pointers are central in C.
13. **2.2.5 Structure and Union Operators** (`.`, `->`) — Using structs and pointers to structs.
14. **21 &lt;stddef.h&gt;** — size_t, NULL. Common types and NULL.
15. **11 &lt;limits.h&gt;** + **22 &lt;stdint.h&gt;** (overview) — Integer sizes and portable types.
16. **6 &lt;errno.h&gt;** + **23.25 perror()** — Simple error handling.

### Skip until later (after “basic”)

- **1** — Rest of Foreword (audience, how to read, email, mirroring, translators, copyright): skim if you care.
- **2.2.7** Bitwise operators: do after basics; important for embedded later.
- **2.9** Storage/type qualifiers: come back for `static`, `const`, etc.
- **2.20.2** Variadic functions: when you need `printf`-like APIs.
- **3 &lt;assert.h&gt;** — when you start testing.
- **4 &lt;complex.h&gt;** — only if you need complex numbers.
- **5 &lt;ctype.h&gt;** — when you do character handling.
- **7 &lt;fenv.h&gt;** — floating-point control (advanced).
- **8 &lt;float.h&gt;** — when you care about float limits.
- **9–10, 12–20** — inttypes, iso646, locale, math idioms, setjmp, signals, stdalign, stdarg, stdatomic, stdbit, stdbool (nice but not required for “basic”), stdnoreturn: later or as needed.
- **25–32** — More string, tgmath, **28 &lt;threads.h&gt;** (after you know pointers and functions), time, uchar, wchar, wctype: add when you need them.