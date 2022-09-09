/* Write a C program to check whether a given integer is odd or even*/

#include <stdio.h>
#include <conio.h>

void main()
{
   int ival, remainder;

   clrscr();

   printf("Enter an integer :");
   scanf ("%d", &ival);

   remainder = ival % 2;

   if (remainder == 0)
	printf ("%d, is an even integer\n", ival);
   else
	printf ("%d, is an odd integer\n", ival);

}
/*-----------------------------
Output

RUN1

Enter an integer :13
13, is an odd integer

RUN2
Enter an integer :24
24, is an even integer

---------------------------------*/

