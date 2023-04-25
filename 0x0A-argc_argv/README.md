# 0x0A. C - argc, argv

![argv&argc](https://i.stack.imgur.com/zWZke.png)
# Resources

- [Arguments to main](https://intranet.alxswe.com/rltoken/Jip_nI4tv2ybQZ-jV3fqJg)
- [argc and argv](https://intranet.alxswe.com/rltoken/31aLwv8qsXuiUZrOk9Djqg)
- [What does argc and argv mean?](https://intranet.alxswe.com/rltoken/A0pzqslB6Z3Y3OV3hJQ6Tw)
- [how to compile with unused variables]()

---
[0. It ain't what they call you, it's what you answer to](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0A-argc_argv/0-whatsmyname.c)
- Write a program that prints its name, followed by a new line.

  - If you rename the program, it will print the new name, without having to compile it again
  - You should not remove the path before the name of the program
---
[1. Silence is argument carried out by other means](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0A-argc_argv/1-args.c)

- Write a program that prints the number of arguments passed into it.

  - Your program should print a number, followed by a new line
  
  ---
  [2. The best argument against democracy is a five-minute conversation with the average voter](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0A-argc_argv/2-args.c)
 - Write a program that prints all arguments it receives.

  - All arguments should be printed, including the first one
  - Only print one argument per line, ending with a new line
  
  ---
  [3. Neither irony nor sarcasm is argument](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0A-argc_argv/3-mul.c)
  
- Write a program that multiplies two numbers.

  - Your program should print the result of the multiplication, followed by a new line
  - You can assume that the two numbers and result of the multiplication can be stored in an integer
  - If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`
  
  ---
  [4. To infinity and beyond](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0A-argc_argv/4-add.c)
  
- Write a program that adds positive numbers.

  - Print the result, followed by a new line
  - If no number is passed to the program, print `0`, followed by a new line
  - If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
  - You can assume that numbers and the addition of all the numbers can be stored in an `int`
  
  ---
  
 [5. Minimal Number of Coins for Change](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0A-argc_argv/100-change.c)
- Write a program that prints the minimum number of coins to make change for an amount of money.

  - Usage: `./change cents`
  - where `cents `is the amount of cents you need to give back
  - if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
  - you should use `atoi` to parse the parameter passed to your program
  -  If the number passed as the argument is negative, print `0`, followed by a new line
  - You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
