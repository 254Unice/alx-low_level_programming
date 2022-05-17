#include <stdlib.h>
#include "function_pointers.h"
/**
  *print_name - fucntion to print name  
  *@name: pointer of char type
  *f: pointer to function
  *Return: Always successful
  */

void print name(char *name, void (*f)(char *))
{
	if(f ==NULL)
			return;
			
	f(name);
}


