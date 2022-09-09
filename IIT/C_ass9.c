/* Write a C program to find the sum of 'N' natural numbers*/

#include <stdio.h>
#include <conio.h>

void main()
{
   	int i, N, sum = 0;

	clrscr();

  	 printf("Enter an integer number\n");
	scanf ("%d", &N);

   	for (i=1; i <= N; i++)
	{
      		sum = sum + i;
	}

	printf ("Sum of first %d natural numbers = %d\n", N, sum);
}

/*----------------------------------------
Output
RUN1

Enter an integer number
10
Sum of first 10 natural numbers = 55


RUN2

Enter an integer number
50
Sum of first 50 natural numbers = 1275
------------------------------------------*/