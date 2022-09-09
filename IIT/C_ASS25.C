/* Write a C program to evaluate the given polynomial    *
 * P(x)=AnXn + An-1Xn-1 + An-2Xn-2+... +A1X + A0, by     *
 * reading its coefficents into an array. [Hint:Rewrite  *
 * the polynomial as					 *
 * P(x) = a0 + x(a1+x(a2+x(a3+x(a4+x(...x(an-1+xan))))   *
 * and evalate the function starting from the inner loop]*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 10

voidmain()
{
   int a[MAXSIZE];
   int i, N,power;
   float x, polySum;

   clrscr();

   printf("Enter the order of the polynomial\n");
   scanf("%d", &N);

   printf("Enter the value of x\n");
   scanf("%f", &x);

   /*Read the coefficients into an array*/

   printf("Enter %d coefficients\n",N+1);
   for (i=0;i <= N;i++)
   {
     scanf("%d",&a[i]);
   }

   polySum = a[0];

   for (i=1;i<= N;i++)
   {
     polySum = polySum * x + a[i];
   }

   power = N;
  
   /*power--;*/

   printf("Given polynomial is:\n");
   for (i=0;i<= N;i++)
   {
      if (power < 0)
      {
	 break;
      }

      /* printing proper polynomial function*/
      if (a[i] > 0)
	   printf(" + ");
      else if (a[i] < 0)
	   printf(" - ");
      else
	   printf (" ");
      printf("%dx^%d  ",abs(a[i]),power--);

   }

   printf("\nSum of the polynomial = %6.2f\n",polySum);
}

/*-----------------------------------------------------
Output
RUN 1
Enter the order of the polynomial
2
Enter the value of x
2
Enter 3 coefficients
3
2
6
Given polynomial is:
 + 3x^2   + 2x^1   + 6x^0
Sum of the polynomial =  22.00

RUN 2
Enter the order of the polynomial
4
Enter the value of x
1
Enter 5 coefficients
3
-5
6
8
-9
Given polynomial is:
 + 3x^4   - 5x^3   + 6x^2   + 8x^1   - 9x^0
Sum of the polynomial =   3.00



-----------------------------------------------------*/



