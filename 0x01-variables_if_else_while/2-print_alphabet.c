#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: always (success/correct)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
	putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
