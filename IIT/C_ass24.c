/* Write a C program to read in four integer numbers into an array    *
 * and find the average of largest two of the given numbers without   *
 * sorting the array. The program should output the given four numbers*
 * and the average with suitable headings.		              */

#include <stdio.h>
#include <conio.h>
#define MAX 4

void main()
{
   int a[MAX], i, l1,l2,temp;

   clrscr();

   printf("Enter %d integer numbers\n", MAX);
   for (i=0; i < MAX; i++)
   {
      scanf("%d", &a[i]);
   }

   printf("Input interger are\n");
   for (i=0; i < MAX; i++)
   {
      printf("%5d", a[i]);
   }

   printf("\n");

   l1 = a[0];  /*assume first element of array is the first largest*/
   l2 = a[1];  /*assume first element of array is the second largest*/

   if (l1 < l2)
   {
      temp = l1;
      l1 = l2;
      l2 = temp;
   }

   for (i=2;i<4;i++)
   {
      if (a[i] >= l1)
      {
	 l2 = l1;
	 l1 = a[i];
      }
      else if(a[i] > l2)
      {
	 l2= a[i];
      }
  }

  printf("\n%d is the first largest\n", l1);
  printf("%d is the second largest\n", l2);
  printf("\nAverage of %d and %d = %d\n", l1,l2, (l1+l2)/2);

}
/*-----------------------------------
Output
RUN 1
Enter 4 integer numbers
45
33
21
10
Input interger are
   45   33   21   10

45 is the first largest
33 is the second largest

Average of 45 and 33 = 39

RUN 2
Enter 4 integer numbers
12
90
54
67
Input interger are
   12   90   54   67

90 is the first largest
67 is the second largest

Average of 90 and 67 = 78

RUN 3
Enter 4 integer numbers
100
200
300
400
Input interger are
  100  200  300  400

400 is the first largest
300 is the second largest

Average of 400 and 300 = 350

------------------------------------*/