#include "main.h"
#include <stdlib.h>

/**
 * ft_strlen - calculate the size of array
 * @s: input from str
 * Return: always i
 */
int ft_strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int res, i, j;

if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
res = ft_strlen(s1) + ft_strlen(s2) + 1;
ptr = malloc(sizeof(char) * res);
if (ptr == NULL)
{
return (NULL);
}
else
{
i = 0;
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
ptr[i] = s2[j];
i++;
j++;
}
ptr[i] = '\0';
return (ptr);
}
}
