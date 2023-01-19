#include "function_pointers.c"
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to function
 */ 
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
