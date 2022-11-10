#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "1-string_nconcat.c"
/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
	 char *concat;

	 concat = string_nconcat("Best ", NULL, 20);
	 printf("%s\n", concat);
	 free(concat);
	 return (0);
}
