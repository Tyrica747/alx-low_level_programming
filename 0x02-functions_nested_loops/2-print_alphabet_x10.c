#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet in lowercase_x10
 * ten times
 * desc: The function uses loop to operate
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	int letter;
	while (counter++ <= 9)
	{	
		for (letter = 'a'; letter <= 'z'; letter++)
		      _putchar(letter);      

	_putchar(10);
	}
}
