#include <stdlib.h>
#include <string.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    // Calculate the total length of the concatenated string
    int total_length = 0;
    for (int i = 0; i < ac; i++) {
        total_length += strlen(av[i]) + 1;  // Add 1 for the newline character
    }

    // Allocate the memory for the concatenated string
    char *str = (char *) malloc(total_length * sizeof(char));
    if (str == NULL) {
        return NULL;
    }

    // Concatenate the arguments into the new string
    int index = 0;
    for (int i = 0; i < ac; i++) {
        strcpy(&str[index], av[i]);  // Copy the argument into the string
        index += strlen(av[i]);      // Move the index to the end of the argument
        str[index] = '\n';           // Add the newline character
        index++;                      // Move the index to the next position for the next argument
    }
    str[index] = '\0';  // Add the null terminator at the end of the string

    return str;
}
