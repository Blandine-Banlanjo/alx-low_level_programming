#include <stdio.h>
/**
 * main - A program that prints the soze of computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

print("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
print("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
print("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
print("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
print("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
