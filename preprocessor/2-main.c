#include "main.h"
/**
 * filename - to print out the name of the file it was complied from
 * Return: 0 on sucess
 */
int main()
{
	char *name;
	int i;

	name = __FILE__;
	i = 0;
	while (name[i] != '\0') 
	
	{
		_putchar(name[i]);
		i = i + 1;
	}
	_putchar('\n');
	return(0);
}
