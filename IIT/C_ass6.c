/* Write a C program to find the biggest of three numbers*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int  a, b, c;

	clrscr();

	printf("Enter the values of a,b and c\n");
   	scanf ("%d %d %d", &a, &b, &c);

   	printf ("a = %d\tb = %d\tc = %d\n", a,b,c);

  	 if ( a > b)
	 {
		if ( a > c)
		{
	   		 printf ("A is the greatest among three\n");
		}
		else
		{
		 	printf ("C is the greatest among three\n");
		}
	 }
	 else if (b > c)
	 {
		printf ("B is the greatest among three\n");
	 }
	 else
		printf ("C is the greatest among three\n");


}

/*-----------------------------
Output
Enter the values of a,b and c
23 32 45
a = 23  b = 32  c = 45
C is the greatest among three

RUN2
Enter the values of a,b and c
234
678
195
a = 234 b = 678 c = 195
B is the greatest among three

RUN3
Enter the values of a,b and c
30 20 10
a = 30  b = 20  c = 10
A is the greatest among three
------------------------------*/