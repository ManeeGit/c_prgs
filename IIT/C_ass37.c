/* Write a C program to read N integers and store them *
 * in an array A, and so find the sum of all these     *
 * elements using pointer. Output the given array and  *
 * and the computed sum with suitable heading          */

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void main()
{
  int i,n,sum=0;
  int *a;

  clrscr();

  printf("Enter the size of array A\n");
  scanf("%d", &n);

  a=(int *) malloc(n*sizeof(int));   /*Dynamix Memory Allocation */

  printf("Enter Elements of First List\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",a+i);
  }

  /*Compute the sum of all elements in the given array*/
  for(i=0;i<n;i++)
  {
     sum = sum + *(a+i);
  }

  printf("Sum of all elements in array = %d\n", sum);

}     /* End of main() */

/*----------------------------
Output
Enter the size of array A
4
Enter Elements of First List
10
20
30
40
Sum of all elements in array = 100
-------------------------------------*/



