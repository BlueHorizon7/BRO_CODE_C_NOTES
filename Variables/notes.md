# C Programming Notes

[Bro code latest C course 2025](https://youtu.be/WrFEtUzVcnw?si=25Cxqo_9M6dQ6Hvm)

---

# 1. Variables

- variable means a reusable container
- Behaves as if it were the value it contains.
- You have to declare the type of a variable before using it.
- `%` is a format specifier is C.
- each vriabled type has comman specifier in C.
- This is most important. You have to end each statement with a semicolon.
- C has a default behavior of displaying six digits after the decimal when working with floating point numbers
- "\n" is used for new line

- int = whole numbers (4 bytes in modern systems)
- float = single-precision decimal number (4 bytes)
- double = double-precision decimal number (8 bytes)
- char = single character (1 byte)
- char[] = array of characters (size varies)
- bool = true or false (1 byte)

1. int

- int means integers.
- int means a whole number not in decimals(points)
- %d is used for integers to print value from int a variable

2. Float

- float meaning floating point number
- Those are floating points number they are numbers including a decimal portion. We only have the capability of storing six to seven digits after the decimal, if you need more more precision such as if you are working with pi you can use a diffrent data type known as a "double".
- `%f` is used for float to print value from float a variable
- .1 for display a given amount of digits after.

3. Double

- In C, double is a data type used to store floating-point numbers with higher precision than float.
- By default, printf() shows only 6 decimal places.
- `%lf` is used for double to print value from double a variable

4. char

- char means character, like string but not exactly. A char stores only one letter, number or symbols. Always use single quotes(') for char.
- These are char they store a single character. Whatever they are symbol any special characters and alphabetic character.
- char and string are not same.
- by default in C string is not availabel.
- `%c` is used for char to print value from a char variable.

5. char[]

- By the help of char[] we can create string in C.
- in C we don't have string. String is a series of characters like "Hello, World!", So in C we use an array of characters(char) to represent a string so store store more than one characters. We can use char again cuz we are working with charactres.
- we use set of sqaure bracket for represting this like string. Now you can store more than a character and we need to use double quotes("").
- `%s` is used for char[] to print value from a char[] variable. here s meaning is string.

6. bool

** Important: C does not have a built-in bool type like in Python or JavaScript. But we can use `#include <stdbool.h>` to get bool, true, and false.**

- You need to write `#include <stdbool.h>` at the top of line in C.
- bool means boolean.
- bool(boolean) are binary they either true or false. 0 means false and 1 means true
