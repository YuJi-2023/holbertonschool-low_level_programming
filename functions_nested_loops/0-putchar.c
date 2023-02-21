#include "main.h"
/**
 * main - Entry point
 * return: Always 0 (Success)
 */

int main(void)
{
	char task0[] = "_putchar";
	int pose = 0;

	while (pose < 9)
	{
		_putchar(task0[pose]);
		pose = pose + 1;
	}
	_putchar('\n');
	return (0);
}
