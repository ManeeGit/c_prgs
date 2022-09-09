/* Write a C program to input real numbers and find the *
 * mean, variance and standard deviation                */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAXSIZE 10

void main()
{
   float x[MAXSIZE];
   int  i, n;
   float avrg, var, SD, sum=0, sum1=0;

   clrscr();

   printf("Enter the value of N\n");
   scanf("%d", &n);

   printf("Enter %d real numbers\n",n);
   for(i=0; i<n; i++)
   {
     scanf("%f", &x[i]);
   }

   /* Compute the sum of all elements */

   for(i=0; i<n; i++)
   {
     sum = sum + x[i];
   }
   avrg = sum /(float) n;

   /* Compute  varaience  and standard deviation  */

   for(i=0; i<n; i++)
   {
     sum1 = sum1 + pow((x[i] - avrg),2);
   }
   var = sum1 / (float) n;
   SD = sqrt(var);

   printf("Average of all elements  = %.2f\n", avrg);
   printf("Varience of all elements = %.2f\n", var);
   printf("Standard deviation       = %.2f\n", SD);
}  /*End of main()*/
/*--------------------------
Output
Enter the value of N
6
Enter 6 real numbers
12
34
10
50
42
33
Average of all elements  = 29.66
Varience of all elements = 213.89
Standard deviation       = 14.62
-------------------------------------*/

