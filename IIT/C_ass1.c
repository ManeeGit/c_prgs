/* Write a C program to find the area of a triangle, given three sides*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int s, a, b, c, area;
	clrscr();
	

	printf("Enter the values of a,b and c\n");
	scanf ("%d %d %d", &a, &b, &c);

   /* compute s*/

   s = (a + b + c) / 2;

	area = sqrt ( s * (s-a) * (s-b) * (s-c));

	printf ("Area of a triangale = %d\n", area);
}

/*-----------------------------
Output

Enter the values of a,b and c
3
4
5
Area of a triangale = 6
------------------------------*/
