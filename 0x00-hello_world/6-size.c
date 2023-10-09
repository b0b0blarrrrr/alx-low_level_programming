#include <stdio.h>
/**
 * main - This is a program that prints the size of various types on the computer
 * Return 0 (Success)
 */

int main(void)
{
	char c;
	int l;
	long int m;
	long long int n;
	float f;

printf("Size of a char: %lu byte(s)\n", (unasigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unasigned long)sizeof(l));
printf("Size of a long int: %lu byte(s)\n", (unasigned long)sizeo (m));
printf("Size of a long long int: %lu byte(s)\n", (unasigned long)sizeof(n));
printf("Size of a float: %lu byte(s)\n", (unasigned long)sizeof(f));
}
