#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * multiply - multiplies two positive integers represented as strings
 * @s1: first integer as a string
 * @s2: second integer as a string
 *
 * Return: a pointer to the product as a string, or NULL on failure
 */
char *multiply(const char *s1, const char *s2)
{
    size_t len1 = 0, len2 = 0, len = 0, i, j;
    int carry = 0, digit1 = 0, digit2 = 0, product = 0;
    char *result = NULL;

    if (s1 == NULL || s2 == NULL) {
        return NULL;
    }
    while (s1[len1] != '\0' && isdigit(s1[len1])) {
        len1++;
    }
    while (s2[len2] != '\0' && isdigit(s2[len2])) {
        len2++;
    }
    if (len1 == 0 || len2 == 0) {
        return NULL;
    }

    len = len1 + len2 + 1;
    result = malloc(len);
    if (result == NULL) {
        return NULL;
    }
    for (i = 0; i < len - 1; i++) {
        result[i] = '0';
    }
    result[len - 1] = '\0';

    for (i = len1; i > 0; i--) {
        digit1 = s1[i - 1] - '0';
        carry = 0;
        for (j = len2; j > 0; j--) {
            digit2 = s2[j - 1] - '0';
            product = digit1 * digit2 + carry + result[i + j - 2] - '0';
            carry = product / 10;
            result[i + j - 2] = product % 10 + '0';
        }
        if (carry > 0) {
            result[i + j - 2] += carry;
        }
    }

    i = 0;
    while (result[i] == '0' && result[i + 1] != '\0') {
        i++;
    }
    if (i > 0) {
        len -= i;
        for (j = 0; j < len; j++) {
            result[j] = result[j + i];
        }
    }

    return result;
}
