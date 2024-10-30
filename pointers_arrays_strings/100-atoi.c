#include "main.h"

/**
 * _atoi - Convert a string to an integrer
 * @s: pointer argument
 * Return: sum
 */

int _atoi(char *s)
{
	int a;
	int b;
	int i;

	a = 0;
	b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			b++;
		}
		if (s[i] > 47 && s[i] < 58)
		{
			while (s[i] > 47 && s[i] < 58)

				a = a * 10 - (s[i++] - 48);
			break;
		}
	}
	return (a *= b % 2 == 0 ? -1 : 1);
}
