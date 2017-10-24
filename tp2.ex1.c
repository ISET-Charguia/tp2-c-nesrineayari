/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main (void)
{
	int rest,x;
	printf("donner un entier:");
	scanf("%d",&x);
	rest=x%3;
	if(rest=0)
		{printf("x est divisible par 3");
	else
		printf("x n'est pas divisible par 3");
}
	return 0;
}
