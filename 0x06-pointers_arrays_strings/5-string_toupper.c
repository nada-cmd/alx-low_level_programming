#include "main.h"
/**
 * string_touuper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_touuper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (0);
}
