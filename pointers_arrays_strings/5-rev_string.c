#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: pointer
 * @count: number of characters in the string
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, temp, count;

	count = 0;
	a = 0;
	temp = 0;

	while (s[count] < '\0')
	{
		count++;
	}
	b = count - 1;
	while (a < count / 2)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
