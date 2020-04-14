#include <stdio.h>
#include <stdlib.h>
/**
 *main - Function.
 *@ac: number of arguments.
 *@av:argument values.
 *Return: 0 on succes.
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
