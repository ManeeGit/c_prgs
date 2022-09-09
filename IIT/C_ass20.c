/* Write a C program to input N numbers (integers or reals)   *
 * and store them in an array. Conduct a linear search for a  *
 * given key number and report success or failure in the form *
 * of a suitable message				      */

#include <stdio.h>
#include <conio.h>

void main()
{
   int array[10];
   int i, N, keynum, found=0;

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
   printf("Enter the element to be searched\n");
   scanf("%d", &keynum);

   /* Linear search begins */
     for ( i=0; i < N ; i++)
     {
       if( keynum == array[i] )
       {
	   found = 1;
	   break;
       }
    }
  if ( found == 1)
     printf("SUCCESSFUL SEARCH\n");
  else
     printf("Search is FAILED\n");

}	/* End of main */
/*------------------------------------
Output
RUN 1
Enter the value of N
5
Enter the elements one by one
23
12
56
43
89
Input array is
23
12
56
43
89
Enter the element to be searched
56
SUCCESSFUL SEARCH

RUN 2
Enter the value of N
3
Enter the elements one by one
456
213
879
Input array is
456
213
879
Entee the element to be searched
1000
Search is FAILED
--------------------------------------*/








