/* Write a C program to check whether a given integer *
 * number is positive or negative*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int number;
	clrscr();

   	printf("Enter a number\n");
	scanf ("%d", &number);

	if (number > 0)
		printf ("%d, is a positive number\n", number);
	else
		printf ("%d, is a negative number\n", number);

}
/*-----------------------------
Output
Enter a number
-5
-5, is a negative number

RUN2
Enter a number
89
89, is a positive number
------------------------------*/