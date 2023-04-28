# 0x0C. C - More malloc, free



[0. Trust no one](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0C-more_malloc_free/0-malloc_checked.c)
 - Write a function that allocates memory using malloc.
    - Prototype: `void *malloc_checked(unsigned int b);`
    - Returns a pointer to the allocated memory
    - if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

---


[1. string_nconcat](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0C-more_malloc_free/1-string_nconcat.c)

  - Write a function that concatenates two strings.

    - Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n); `
    - The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
    - If the function fails, it should return NULL
    - If n is greater or equal to the length of s2 then use the entire string s2
    - if NULL is passed, treat it as an empty string




## NOTE

what is the deffreance between this 

`while (s1[len1] != '\0')`
`len1++;` 

and this

`while (s1 && s1[len1])`
`len1++;`

> Both of these while loops are used to calculate the length of a string in C. However, they differ in the way they handle the case where the input string is NULL.

> The first while loop, while (s1[len1] != '\0') len1++;, checks for a null terminating character in the input string s1, and increments the len1 variable until it reaches the end of the string. This loop assumes that s1 is a null-terminated string and does not check if s1 is NULL. If s1 is NULL, this loop will result in undefined behavior.

> The second while loop, while (s1 && s1[len1]) len1++;, checks if the input string s1 is not NULL using a logical AND operator. If s1 is NULL, the loop exits immediately without accessing the s1[len1] element, which would result in a segmentation fault. If s1 is not NULL, the loop checks for a null terminating character in the input string s1, and increments the len1 variable until it reaches the end of the string.

> In summary, **the main difference** between these two while loops is that the second loop checks if the input string is NULL before accessing any of its elements, while the first loop assumes that the input string is not NULL and does not perform this check. It is generally safer to use the second while loop when calculating the length of a string in C, as it avoids potential segmentation faults when the input string is NULL. 
---
[2. _calloc](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0C-more_malloc_free/2-calloc.c)
- Write a function that allocates memory for an array, using malloc.

    - Prototype:` void *_calloc(unsigned int nmemb, unsigned int size);`
    - The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
    - The memory is set to zero
    - If nmemb or size is 0, then _calloc returns NULL
    - If malloc fails, then _calloc returns NULL
  - FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

---
[3. array_range](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0C-more_malloc_free/3-array_range.c)
- Write a function that creates an array of integers.

    - Prototype: `int *array_range(int min, int max);`
    - The array created should contain all the values from min (included) to max (included), ordered from min to max
    - Return: the pointer to the newly created array
    - If min > max, return NULL
    - If malloc fails, return NULL


---
[4. _realloc](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0C-more_malloc_free/100-realloc.c)

 - Write a function that reallocates a memory block using malloc and free

    - Prototype:` void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
    - where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
    - old_size is the size, in bytes, of the allocated space for ptr
    - and new_size is the new size, in bytes of the new memory block
    - The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
    - If new_size > old_size, the “added” memory should not be initialized
    - If new_size == old_size do not do anything and return ptr
    - If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
    - If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
    - Don’t forget to free ptr when it makes sense
- FYI: The standard library provides a different function: realloc. Run man realloc to learn more.

---
[5. We must accept finite disappointment, but never lose infinite hope](https://github.com/Mohamed-Silaya/alx-low_level_programming/blob/main/0x0C-more_malloc_free/101-mul.c)
- Write a program that multiplies two positive numbers.

    - Usage: mul num1 num2
    - num1 and num2 will be passed in base 10
    - Print the result, followed by a new line
    - If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
    - num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
    - You are allowed to use more than 5 functions in your file
You can use bc (man bc) to check your results.





