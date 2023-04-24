# 0x09. C - Static libraries
![Static vs Dinamic library](https://media.licdn.com/dms/image/C4D12AQEJC354WvD2nQ/article-inline_image-shrink_400_744/0/1620088158145?e=1687392000&v=beta&t=-AIJ8Mq0pVLnuwqUNj7ekniAD3n4UxLYRYluSM9sH80)
## Resources

- [What Is A “C” Library? What Is It Good For?](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
- [Using A “C” Library In A Program](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
- [What is difference between Dynamic and Static library(Static and Dynamic linking) ](https://intranet.alxswe.com/rltoken/PexOGO-npR_ZDQk-SpOR9g)

----

[0. A library is not a luxury but one of the necessities of life]()|Create the static library libmy.a containing all the functions below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

```
+ main.h file to your repository. It should at least contain all the prototypes of the above functions.

- Steps to create static library.
First compile all `.c` files to get our object files `.o` files. `gcc -c *c`
Then we create our static library from our object files. `ar rc libmy.a *.o`
Then we confirm if our static library was created successfully. `ar -t libmy.a`
We confirm if our object files were linked successfully. `nm main.h`
Compile the main code to test our static library this way: `gcc -std=gnu89 main.c -L. -my -o quote`

[1. Without libraries what have we? We have no past and no future]()
Create a script called `create_static_lib.sh` that creates a static library called `liball.a `from all the `.c` files that are in the current directory.

## Note: In creating a static library
- gcc -c *.c > This converts .c files to .o (object) files

- ar rcs libmy.a *.o

- ar rc libmy.a *.o > This creates the static library "Libmy.a"

- ar -t libmy.a > This lists all files in libmy.a

- ranlib libmy.a > This converts to random library
  - After creating a static library and you would want to compile for testing use:
    > gcc -std=gnu89 main.c -L -lmy -o(new_file_name)
