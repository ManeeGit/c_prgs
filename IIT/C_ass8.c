/* Write a C program to simulate a simple calculator to perform    *
 * arithmetic operations like addition, subtraction,multiplication *
 * and division only on integers. Error message should be repoetrd *
 * if any attempt is made to divide by zero			   */

#include <stdio.h>
#include <conio.h>

void main()
{
	char oper;			/* oper is an operator to be selected */
	float n1, n2, result;

	clrscr();

	printf ("Simulation of a Simple Calculator\n\n");

	printf("Enter two numbers\n");
	scanf ("%f %f", &n1, &n2);

	fflush (stdin);

	printf("Enter the operator [+,-,*,/]\n");
	scanf ("%c", &oper);


	switch (oper)
   	{
		case '+': result = n1 + n2;
			  break;
		case '-': result = n1 - n2;
			  break;
		case '*': result = n1 * n2;
			  break;
		case '/': result = n1 / n2;
			  break;
		default : printf ("Error in operation\n");
			  break;
	}

	printf ("\n%5.2f %c %5.2f= %5.2f\n", n1,oper, n2, result);

}
/*-----------------------------
Output
Simulation of Simple Calculator

Enter two numbers
3 5
Enter the operator [+,-,*,/]
+

 3.00 +  5.00=  8.00


RUN2
Simulation of Simple Calculator

Enter two numbers
12.75
8.45
Enter the operator [+,-,*,/]
-

12.75 -  8.45=  4.30

RUN3
Simulation of Simple Calculator

Enter two numbers
12 12
Enter the operator [+,-,*,/]
*

12.00 * 12.00= 144.00


RUN4
Simulation of Simple Calculator

Enter two numbers
5
9
Enter the operator [+,-,*,/]
/

 5.00 /  9.00=  0.56


------------------------------*/


