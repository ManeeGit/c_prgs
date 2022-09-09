/* Write a C program to find the number of integers divisible by 5   *
 * between the given range N1 and N2, where N1 < N2 and are integers.*
 * Also find the sum of all these integer numbers that divisible by 5*
 * and output the computed results				     */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i, N1, N2, count = 0, sum = 0;

  clrscr();

  printf ("Enter the value of N1 and N2\n");
  scanf ("%d %d", &N1, &N2);

  /*Count the number and compute their sum*/
  printf ("Integers divisible by 5 are\n");

  for (i = N1; i < N2; i++)
  {
     if (i%5 == 0)
     {
	printf("%3d,", i);
	count++;
	sum = sum + i;
     }
  }

  printf ("\nNumber of integers divisible by 5 between %d and %d = %d\n",
	   N1,N2,count);
  printf ("Sum of all integers that are divisible by 5 = %d\n", sum);

}   /* End of main()*/
/*-----------------------------
Output
Enter the value of N1 and N2
2
27
Integers divisible by 5 are
  5, 10, 15, 20, 25,
Number of integers divisible by 5 between 2 and 27 = 5
Sum of all integers that are divisible by 5 = 75
------------------------------------------------------*/




