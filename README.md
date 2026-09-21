// Star Pyramid in C //

A simple C program that prints a centered star pyramid based on the number of rows entered by the user.
//Description//

This program uses loops and a separate function to create a star pyramid.

The user enters the number of rows, and the program prints a centered pyramid using `*`.

//Example//

//Input//

```text
5
```

//Output//

```text
    *
   ***
  *****
 *******
*********
```
//Concepts Used//

* C programming
* `for` loops
* Functions
* Pattern printing
* User input with `scanf()`
* Output with `printf()`
* Basic input validation
//How It Works//

For each row, the program calculates:

```text
Spaces = n - row
Stars  = 2 × row - 1
```

This creates the centered pyramid shape.

// How to Run //

Compile:

```bash
gcc star_pyramid.c -o star_pyramid
```

Run:

```bash
./star_pyramid
```

On Windows:

```bash
star_pyramid.exe
```

* Author *

**MD. Unick Sardar**

Beginner C Programming Project
