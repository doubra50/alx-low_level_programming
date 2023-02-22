#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * main - Entry point
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

	return (0);
}
