/* Write a C program to check whether a given number is prime or not *
 * and output the given number with suitable message		     */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	int num, j, flag;

	clrscr();

	printf("Enter a number\n");
	scanf("%d", &num);

  	if ( num <= 1)
	{
     		printf("%d is not a prime numbers\n", num);
	  	exit(1);
   	}

	flag = 0;

   	for ( j=2; j<= num/2; j++)
	{
		if( ( num % j ) == 0)
		{
	   		flag = 1;
			break;
		}
	}

     	if(flag == 0)
		 printf("%d is a prime number\n",num);
     	else
		 printf("%d is not a prime number\n", num);
}
/*------------------------
Output
RUN 1
Enter a number
34
34 is not a prime number

RUN 2
Enter a number
29
29 is a prime number
-----------------------------*/











