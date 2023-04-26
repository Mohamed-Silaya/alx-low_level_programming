#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str) {
    int count = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!in_word) {
                in_word = 1;
                count++;
            }
        } else {
            in_word = 0;
        }
    }
    return count;
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    // Count the number of words in the string
    int num_words = count_words(str);

    // Allocate memory for the array of words
    char **words = (char **) malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    // Initialize the array of words to NULL
    for (int i = 0; i < num_words; i++) {
        words[i] = NULL;
    }

    // Split the string into words and add them to the array
    int word_index = 0;
    int word_start = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!in_word) {
                in_word = 1;
                word_start = i;
            }
        } else {
            if (in_word) {
                in_word = 0;
                int word_length = i - word_start;
                words[word_index] = (char *) malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    // Free memory for previous words
                    for (int j = 0; j < word_index; j++) {
                        free(words[j]);
                    }
                    free(words);
                    return NULL;
                }
                strncpy(words[word_index], &str[word_start], word_length);
                words[word_index][word_length] = '\0';
                word_index++;
            }
        }
    }

    // Add the last word to the array if there is one
    if (in_word) {
        int word_length = strlen(&str[word_start]);
        words[word_index] = (char *) malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            // Free memory for previous words
            for (int j = 0; j < word_index; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        strcpy(words[word_index], &str[word_start]);
        word_index++;
    }

    words[word_index] = NULL;  // Add the NULL terminator to the array

    return words;
}

