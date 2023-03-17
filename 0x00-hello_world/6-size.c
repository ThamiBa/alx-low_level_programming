#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 *
 * Return: 0 when successeful
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
return (0);

}
