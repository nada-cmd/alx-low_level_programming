#include "main.h"
/**
 * _print_recursion - prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_recursion(char *s)
{
if (*s)
{
_print_rev_recursions(s + 1);
_putchar(*s);
}
}
