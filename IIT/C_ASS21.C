/* Write a C program to sort N numbers in ascending order    *
 * using Bubble sort and print both the given and the sorted *
 * array with suitable headings				     */

#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10

void main()
{
   int array[MAXSIZE];
   int i, j, N, temp;

   clrscr();

   printf("Enter the value of N\n");
   scanf("%d",&N);

   printf("Enter the elements one by one\n");
   for(i=0; i<N ; i++)
   {
	scanf("%d",&array[i]);
   }
   printf("Input array is\n");
   for(i=0; i<N ; i++)
   {
	printf("%d\n",array[i]);
   }
   /* Bubble sorting begins */
   for(i=0; i< N ; i++)
   {
      for(j=0; j< (N-i-1) ; j++)
      {
	 if(array[j] > array[j+1])
	 {
	     temp       = array[j];
	     array[j]   = array[j+1];
	     array[j+1] = temp;
	 }
      }
   }
   printf("Sorted array is...\n");
   for(i=0; i<N ; i++)
   {
       printf("%d\n",array[i]);
   }
}  /* End of main*/

/*----------------------------------
Output
Enter the value of N
5
Enter the elements one by one
390
234
111
876
345
Input array is
390
234
111
876
345
Sorted array is...
111
234
345
390
876
---------------------------*/

