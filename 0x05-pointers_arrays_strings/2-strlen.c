#include "main.h"

/**
 * _strlen - is function that print the length of a string
 * @s: char as input
 * Return: length as integer
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];


	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
