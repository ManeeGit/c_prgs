/* Write a C program to find the area of a circle, given the radius*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.142

void main()
{
	float radius, area;
	clrscr();

   printf("Enter the radius of a circle\n");
	scanf ("%f", &radius);

	area = PI * pow (radius,2);

	printf ("Area of a circle = %5.2f\n", area);
}

/*-----------------------------
Output :

RUN1
Enter the radius of a circle
3.2
Area of a circle = 32.17

RUN 2
Enter the radius of a circle
6
Area of a circle = 113.11

------------------------------*/
