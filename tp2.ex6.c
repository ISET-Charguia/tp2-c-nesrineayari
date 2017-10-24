/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a,b,c,max,min;
    printf("donner a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    max=a;
    min=b;
    }
else
{
	max=b;
	min=a;
}
if(c>=max)
	max=c;
if(c<=min)
	{

   printf("min=%d",min);

}
return 0;

}
