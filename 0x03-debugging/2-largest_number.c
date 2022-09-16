#include "main.h"



/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */



int largest_number(int a, int b, int c)

{

    int largest;



    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }

    else if (c >= a && c >= b)
    {
        largest = c;
    }

    return (largest);

}
[2:08 am, 16/09/2022] +233 20 855 0500: 0-main.c
[2:08 am, 16/09/2022] +233 20 855 0500: #include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0 always success
 */
int main(void)
{
int i;

i = 0;

positive_or_negative(i);

return (0);
}
