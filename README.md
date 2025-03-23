# 📌 Structured Programming in C  

This repository contains all the C programs I wrote during my **1st semester (2022)** while learning **Structured Programming in C**.  
It covers fundamental concepts such as **loops, arrays, functions, file handling, pattern printing, sorting algorithms, and even a music program! 🎵**  

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
| `music.c` | 🎶 **Plays Jadoo's Outer Space Message** from *Koi Mil Gaya* using Beep() |
| `miscellaneous.c` | Various **math and logical problem-solving programs** |

---

## 🎶 Music Program - It generate music. 

One of the most exciting programs in this repository is `music.c`, which **Recreate an interesting tune** from the Bollywood movie *Koi Mil Gaya (2003)*.  
It uses the **Beep()** function to generate musical frequencies.  

### 🎧 Code for `music.c`  
```c
#include <windows.h>

int main() {
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
    return 0;
}

