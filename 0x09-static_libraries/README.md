# C - Static libraries
![](https://media.licdn.com/dms/image/C4E12AQGg4OzynnXaJg/article-cover_image-shrink_600_2000/0/1551675321959?e=2147483647&v=beta&t=n4MRn91luPInqFUifx_j1uktB5jOFT_kHUIHMe210XI)

## GENERAL 📖📖📖
- why we need libraries,What is a static library, how does it work, how to create one, and making script for it
- Basic usage of `ar`,`rc` , `ranlib`.


## RESOURCES:
- [What Is A “C” Library? What Is It Good For?](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
- [Using A “C” Library In A Program](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
- [What is difference between Dynamic and Static library](https://intranet.alxswe.com/rltoken/PexOGO-npR_ZDQk-SpOR9g)


---
1-  why we need libraries?
 -  One of the problems with developed programs, is that they tend to grow larger and larger,  this point where we start thinking about combining out source code into small units of related files, that can be managed with a separate makefile, possibly by a different programmer (for a multi-programmer project).

2-  What is a C Static Library?
-  In the C programming language, a static library is a compiled `object file` containing all symbols required by the main program to operate (functions, variables etc.), this happen in linking phase.

3- How to create static libraries?
-  to compile all library codes (*.c) into object files (*.o) without linking.
   - gcc -c *.c 
-  To create a static library or to add additional object files to an existing static library 
   -  ar -rc lib[name].a *.o -> ar -rc libmy.a *.o
   -  we have to use the GNU ar (archiver) program 
   -  The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.
 
4- Create a script to automate the peocess:
  - we need first to genrate object files     -> gcc -c *.c
  - to make static lib                        -> ar -rc liball.a *.o
  - we use 'ranlib' to re-generate the index  -> ranlib liball.a

 



