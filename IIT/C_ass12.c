/* Write a C program to find the sum of odd numbers and *
 * sum of even numbers from 1 to N. Output the computed *
 * sums on two different lines with suitable headings   */

#include <stdio.h>
#include <conio.h>

void main()
{
   	int i, N, oddSum = 0, evenSum = 0;

	clrscr();

	printf("Enter the value of N\n");
	scanf ("%d", &N);

	for (i=1; i <=N; i++)
  	{
		if (i % 2 == 0)
			evenSum = evenSum + i;
		else
			oddSum = oddSum + i;
	}

	printf ("Sum of all odd numbers  = %d\n", oddSum);
	printf ("Sum of all even numbers = %d\n", evenSum);
}
/*-----------------------------
Output
RUN1

Enter the value of N
10
Sum of all odd numbers  = 25
Sum of all even numbers = 30

RUN2
Enter the value of N
50
Sum of all odd numbers  = 625
Sum of all even numbers = 650

------------------------------*/