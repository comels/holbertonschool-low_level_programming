#include <stdio.h>
/**
 * print_name - fonction
 * @name: param
 * @f: param
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
