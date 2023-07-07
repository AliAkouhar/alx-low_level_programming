#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*s == accept[e])
			{
				m++;
				break;
			}
			else if (accept[e + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
