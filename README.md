# 📌 Structured Programming in C  

This repository contains all the C programs I wrote during my **1st semester (2022)** while learning **Structured Programming in C**.  
It covers fundamental concepts such as **loops, arrays, functions, file handling, pattern printing, sorting algorithms, ternary operator, math functions, switch cases, and even a music program! 🎵**  

---

## 📂 Folder Structure & Topics Covered  

| File Name        | Description |
|-----------------|-------------|
| `loops.c` | Examples of **for, while, and do-while** loops |
| `arrays.c` | **Single & Multi-dimensional** array operations |
| `functions.c` | **User-defined and recursive** functions |
| `pointers.c` | **Pointer operations** and memory access |
| `patterns.c` | Printing **star, number, and alphabet** patterns |
| `sorting.c` | Implementation of **Bubble, Selection, Insertion Sort** |
| `searching.c` | **Linear & Binary** search implementations |
| `file_handling.c` | **Read/Write files** in C |
| `ternary.c` | Usage of **ternary (conditional) operator** |
| `math_functions.c` | Examples of **math functions like sqrt(), pow(), abs(), sin(), cos()** |
| `switch_case.c` | **Switch case examples** for menu-driven programs |
| `music.c` | 🎶 **Plays Jadoo's Outer Space Message & Twinkle Twinkle Little Star** |
| `miscellaneous.c` | Various **math and logical problem-solving programs** |

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
