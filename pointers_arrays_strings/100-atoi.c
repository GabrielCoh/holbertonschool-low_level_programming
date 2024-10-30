#include "main.h"

/**
 * _atoi - Convert a string to an integrer
 * @s: pointer argument
 * Return: sum
 */

int _atoi(char *s)
{
	int a;
	int sum;

	a = 0;
	sum = 0;
	while (s[a] != '\0')
	{
		if (s[a] < 48 || s[a] > 57)
		{
			return (0);
		}
		else
		{
			sum = sum * 10 + (s[a] - 48);
			a++;
		}
	}
	return (sum);
}
