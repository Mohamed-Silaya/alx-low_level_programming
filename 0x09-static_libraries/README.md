# C - Static libraries
![](https://media.licdn.com/dms/image/C4E12AQGg4OzynnXaJg/article-cover_image-shrink_600_2000/0/1551675321959?e=2147483647&v=beta&t=n4MRn91luPInqFUifx_j1uktB5jOFT_kHUIHMe210XI)

1-  why we need libraries?
 -  One of the problems with developed programs, is that they tend to grow larger and larger,  this point where we start thinking about combining out source code into small units of related files, that can be managed with a separate makefile, possibly by a different programmer (for a multi-programmer project).

2-  What is a C Static Library?
-  In the C programming language, a static library is a compiled `object file` containing all symbols required by the main program to operate (functions, variables etc.), this happen in linking phase.

3- Creating A Static "C" Library Using "ar" and "ranlib"
-  ar rc libutil.a main.o


