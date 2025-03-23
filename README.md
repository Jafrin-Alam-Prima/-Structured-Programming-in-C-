# 📌 Structured Programming in C  

This repository contains **all fundamental C programs** I wrote during my **1st semester (2022)** while learning **Structured Programming in C**.  
It includes **basic to advanced topics** like `variables`, `if-else`, `switch-case`, `loops`, `arrays`, `functions`, `pointers`, `sorting`, `searching`, `file handling`, `math functions`, and even a `music program` that plays **Jadoo’s Message & Twinkle Twinkle Little Star!** 🎵  

---

## 📂 Folder Structure & Topics Covered  

### 1️⃣ Basics of C  
| File Name        | Description |
|-----------------|-------------|
| `variables.c` | Declaring and using **variables, constants, and data types** |
| `input_output.c` | **scanf() & printf()** for user input and output |
| `operators.c` | Arithmetic, Logical, Relational, Bitwise **Operators** |

### 2️⃣ Conditional Statements  
| File Name        | Description |
|-----------------|-------------|
| `if_else.c` | Examples of **if, if-else, nested if-else** |
| `switch_case.c` | **Switch case** programs for menu-driven execution |
| `ternary.c` | **Ternary operator** usage in decision-making |

### 3️⃣ Loops & Iterations  
| File Name        | Description |
|-----------------|-------------|
| `loops.c` | **For, while, and do-while** loop examples |
| `nested_loops.c` | **Nested loops** for pattern printing |
| `patterns.c` | Printing **stars, numbers, and alphabets** |

### 4️⃣ Arrays & Strings  
| File Name        | Description |
|-----------------|-------------|
| `arrays.c` | **Single & Multi-dimensional** array operations |
| `strings.c` | String operations using `gets()`, `puts()`, `strcpy()`, etc. |

### 5️⃣ Functions & Recursion  
| File Name        | Description |
|-----------------|-------------|
| `functions.c` | **User-defined functions** & function calls |
| `recursion.c` | **Recursive functions** for factorial, Fibonacci, etc. |

### 6️⃣ Pointers & Memory Management  
| File Name        | Description |
|-----------------|-------------|
| `pointers.c` | **Pointer basics, pointer arithmetic** |
| `pointer_functions.c` | **Passing pointers to functions** |

### 7️⃣ Searching & Sorting Algorithms  
| File Name        | Description |
|-----------------|-------------|
| `sorting.c` | Implementation of **Bubble, Selection, Insertion Sort** |
| `searching.c` | **Linear & Binary** search |

### 8️⃣ File Handling  
| File Name        | Description |
|-----------------|-------------|
| `file_handling.c` | **Reading & writing files** using `fopen()`, `fprintf()`, `fscanf()` |

### 9️⃣ Mathematics & Miscellaneous  
| File Name        | Description |
|-----------------|-------------|
| `math_functions.c` | **Math functions like sqrt(), pow(), abs(), sin(), cos()** |
| `miscellaneous.c` | Various **math & logical problem-solving programs** |

### 🔟 🎶 Music Program  
| File Name        | Description |
|-----------------|-------------|
| `music.c` | 🎶 **Plays Jadoo's Outer Space Message & Twinkle Twinkle Little Star** |

---

## 🎶 Music Program - Jadoo's Outer Space Message & Twinkle Twinkle Little Star  

This repository contains a **fun music program** in `music.c`, which **recreates Jadoo’s communication sound** from the Bollywood movie *Koi Mil Gaya (2003)* and also plays **Twinkle Twinkle Little Star**!  
It uses the **Beep()** function to generate musical frequencies.  

### 🎧 Code for `music.c`  
```c
#include <windows.h>

void jadoo_music() {
    Beep(493.9, 500);
    Beep(523.3, 500);
    Beep(698.5, 500);
    Beep(659.3, 800);
    Beep(493.9, 500);
    Beep(523.3, 500);
    Beep(659.3, 500);
    Beep(587.3, 800);
    Beep(493.9, 500);
    Beep(523.3, 500);
    Beep(698.5, 1000);
    Beep(659.3, 500);
    Beep(587.3, 500);
    Beep(659.3, 1000);
}

void twinkle_twinkle() {
    Beep(261, 400);
    Beep(261, 400);
    Beep(392, 400);
    Beep(392, 400);
    Beep(440, 400);
    Beep(440, 400);
    Beep(392, 800);

    Beep(349, 400);
    Beep(349, 400);
    Beep(330, 400);
    Beep(330, 400);
    Beep(294, 400);
    Beep(294, 400);
    Beep(261, 800);
}

int main() {
    printf("Choose a tune:\n1. Jadoo's Message\n2. Twinkle Twinkle\n");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) jadoo_music();
    else if (choice == 2) twinkle_twinkle();
    else printf("Invalid choice.\n");

    return 0;
}
