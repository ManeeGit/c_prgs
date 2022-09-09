/* Write a C program to find the simple interest , given principle, *
 * rate of interest and times*/

#include <stdio.h>
#include <conio.h>

main()
{

   float p, r, si;
   int t;

  

   printf("Enter the values of p,r and t\n");
   scanf ("%f %f %d", &p, &r, &t);

   si = (p * r * t)/ 100.0;
   
   printf ("Amount = Rs. %5.2f\n", p);
   printf ("Rate   = Rs. %5.2f%\n", r);
   printf ("Time   = %d years\n", t);
   printf ("Simple interest  = %5.2f\n", si);

}

/*-----------------------------
Output
Enter the values of p,r and t
2000
8
3
Amount = Rs. 2000.00
Rate   = Rs.  8.00%
Time   = 3 years
Simple interest  = 480.00

------------------------------*/
