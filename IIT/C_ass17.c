/* Write a C program to generate and print prime numbers in a given  *
 * range. Also print the number of prime numbers 		     */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
   int M, N, i, j, flag, temp, count = 0;

   clrscr();

   printf("Enter the value of M and N\n");
   scanf("%d %d", &M,&N);

   if(N < 2)
   {
     printf("There are no primes upto %d\n", N);
     exit(0);
   }
   printf("Prime numbers are\n");
   temp = M;

   if ( M % 2 == 0)
   {
      M++;
   }
   for (i=M; i<=N; i=i+2)
   {
     flag = 0;

     for (j=2; j<=i/2; j++)
     {
	if( (i%j) == 0)
	{
	   flag = 1;
	   break;
	}
     }
     if(flag == 0)
     {
       printf("%d\n",i);
       count++;
     }
   }
   printf("Number of primes between %d  and %d = %d\n",temp,N,count);
}
/*---------------------------------
Output
Enter the value of M and N
15 45
Prime numbers are
17
19
23
29
31
37
41
43
Number of primes between 15  and 45 = 8
-------------------------------------------*/

