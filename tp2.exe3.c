/*
 ============================================================================
 Name        : exe3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=0, b=0;
  float x=0;

  printf("RESOLUTION DE L'EQUATION : ax+b=0\n\n");

  printf("donner a ");
  scanf("%d", &a);


  printf("donner b ");
  scanf("%d", &b);

  x =-b/a ;

    if (a != 0 && b != 0)
    {
          printf("La solution de l'equation est : x = %f\n\n\n", x);
    }
    else if (a != 0 && b == 0)
    {
         printf("La solution de l'equation est : x = %f\n\n\n", x);
    }
    else
    {
        printf("Il n'y a pas de solution a l'equation\n\n\n");
    }



  system("PAUSE");
  return 0;
}
