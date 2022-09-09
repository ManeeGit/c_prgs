/* Write a C program to read N integers (zero, +ve and -ve) *
 * into an array A and to                 		    *
 * a) Find the sum of negative numbers                      *
 * b) Find the sum of positive numbers and                  *
 * c) Find the average of all input numbers		    *
 * Output the various results computed with proper headings */

#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10

void main()
{
   int array[MAXSIZE];
   int i, N, negsum=0, posum=0;
   float total=0.0, averg;

   clrscr();

   printf ("Enter the value of N\n");
   scanf("%d", &N);

   printf("Enter %d numbers (-ve, +ve and zero)\n", N);
   for(i=0; i< N ; i++)
   {
	scanf("%d",&array[i]);
	fflush(stdin);
   }

   printf("Input array elements\n");
   for(i=0; i< N ; i++)
   {
	printf("%+3d\n",array[i]);
   }

   /* Summing  begins */
   for(i=0; i< N ; i++)
   {

	if(array[i] < 0)
	{
	   negsum = negsum +  array[i];
	}
	else if(array[i] > 0)
	{
	  posum = posum + array[i];
	}
	else if( array[i] == 0)
	{
	   ;
	}
	total = total + array[i] ;
   }

   averg = total / N;
   printf("\nSum of all negative numbers    = %d\n",negsum);
   printf("Sum of all positive numbers    = %d\n", posum);
   printf("\nAverage of all input numbers   = %.2f\n", averg);

}        /*End of main()*/
/*-------------------------------------
Output
Enter the value of N
5
Enter 5 numbers (-ve, +ve and zero)
5
-3
0
-7
6
Input array elements
 +5
 -3
 +0
 -7
 +6

Sum of all negative numbers    = -10
Sum of all positive numbers    = 11

Average of all input numbers   = 0.20
--------------------------------------*/
