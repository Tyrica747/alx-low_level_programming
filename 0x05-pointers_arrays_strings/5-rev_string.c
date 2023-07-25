#include "main.h"
/**
 * rev_string - reverse a string
 * @s: String to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
for (s + length = s + i;
i++;
length--;
}
}

/**
 * _strlen - returns to the lenght of a string
 * @s: string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

/**
 * swap_char - swap two characters
 * @a: first character
 * @b: secondd character
 * Return: nothing
 */

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
