#include <stdio.h>
/**
 * main - print the sting in the puts function
 *
 * Description:using main function
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %d byte(s)\n", sizeof(c));
	printf("size of int: %d byte(s)\n", sizeof(i));
	printf("size of long: %d byte(s)\n", sizeof(li));
	printf("size of long long: %d byte(s)\n", sizeof(lli));
	printf("size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
