#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (success/correct)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{

		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
