/* Write a C program to accept N numbers sorted in ascending order *
 * and to search for a given number using binary search. Report    *
 * sucess or fialure in the form of suitable messages              */

#include <stdio.h>
#include <conio.h>

void main()
{
   int array[10];
   int i, j, N, temp, keynum;
   int low,mid,high;

   clrscr();

   printf("Enter the value of N\n");
   scanf("%d",&N);

   printf("Enter the elements one by one\n");
   for(i=0; i<N ; i++)
   {
	scanf("%d",&array[i]);
   }
   printf("Input array elements\n");
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

   printf("Enter the element to be searched\n");
   scanf("%d", &keynum);

   /* Binary searching begins */

   low=1;
   high=N;

   do
   {
       mid= (low + high) / 2;
       if ( keynum < array[mid] )
	  high = mid - 1;
       else if ( keynum > array[mid])
	  low = mid + 1;
   } while( keynum!=array[mid] && low <= high); /* End of do- while */

   if( keynum == array[mid] )
   {
     printf("SUCCESSFUL SEARCH\n");
   }
   else
   {
     printf("Search is FAILED\n");
   }

}  /* End of main*/
/*----------------------------------
Output
Enter the value of N
4
Enter the elements one by one
3
1
4
2
Input array elements
3
1
4
2
Sorted array is...
1
2
3
4
Enter the element to be searched
4
SUCCESSFUL SEARCH
---------------------------*/

