#include "function_pointers.h"

/**
  *print_name - Function to print name  
  *@name: The name to prints
  *f: Pointer to function
  *
  *Return: Nothing
  */

void print name(char *name, void (*f)(char *))
{
if(name !=NULL && f !==NULL)
			return;
			
	f(name);
}


