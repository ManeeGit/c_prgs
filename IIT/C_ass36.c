/* Write a C program to read two integers M and N *
 * and to swap their values. Use a user-defined   *
 * function for swapping. Output the values of    *
 * M and N before and after swapping with suitable*
 * mesages                                       */

#include <stdio.h>
#include <conio.h>

void main()
{
  float M,N;

  void swap(float *ptr1, float  *ptr2 );  /* Function Declaration */

  printf("Enter the values of M and N\n");
  scanf("%f %f", &M, &N);

  printf ("Before Swapping:M = %5.2f\tN = %5.2f\n", M,N);
  swap(&M, &N);

  printf ("After Swapping:M  = %5.2f\tN = %5.2f\n", M,N);

}     /* End of main() */

/* Function swap - to interchanges teh contents of two items*/
void swap(float *ptr1, float *ptr2 )
{
   float temp;
   temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;

} /* End of Function */


/* ----------------------------------------
Output
Enter the values of M and N
32 29
Before Swapping:M = 32.00       N = 29.00
After Swapping:M  = 29.00       N = 32.00
------------------------------------------*/



