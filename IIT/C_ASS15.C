/* Write a C program to find the value of cos(x) using the series *
 * up to the given accuracy (without using user defined function) *
 * Also print cos(x) using library function.                      */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
  int  n, x1;
  float  acc, term, den, x, cosx=0, cosval;

  clrscr();

  printf("Enter the value of x (in degrees)\n");
  scanf("%f",&x);

  x1 = x;

  /* Converting degrees to radians*/

  x = x*(3.142/180.0);
  cosval = cos(x);

  printf("Enter the accuary for the result\n");
  scanf("%f", &acc);
  term = 1;
  cosx = term;
  n = 1;

  do
  {
	 den = 2*n*(2*n-1);
	 term = -term * x * x / den;
	 cosx = cosx + term;
	 n = n + 1;
  } while(acc <= fabs(cosval - cosx));

  printf("Sum of the cosine series       = %f\n", cosx);
  printf("Using Library function cos(%d) = %f\n", x1,cos(x));
}         /*End of main() */
/*------------------------------
Output
Enter the value of x (in degrees)
30
Enter the accuary for the result
0.000001
Sum of the cosine series       = 0.865991
Using Library function cos(30) = 0.865991

RUN 2
Enter the value of x (in degrees)
45
Enter the accuary for the result
0.0001
Sum of the cosine series       = 0.707031
Using Library function cos(45) = 0.707035
---------------------------------------------*/



