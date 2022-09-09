/* Write a C program to read a matrix A (MxN) and to find the *
 * following using functions				      *
 * a) Sum of the elements of each row 			      *
 * b) Sum of the elements of each column		      *
 * c) Find the sum of all the elements of the matrix          *
 * Output the computed results with suitable headings	      */

#include <stdio.h>
#include <conio.h>

void main()
{
   int arr[10][10];
   int i, j, row, col, rowsum, colsum,sumall=0;

   /* Function declaration */
   int Addrow(int A[10][10], int k, int c);
   int Addcol(int A[10][10], int k, int c);

   clrscr();

   printf("Enter the order of the matrix\n");
   scanf("%d %d", &row, &col);

   printf("Enter the elements of the matrix\n");
   for(i=0; i<row; i++)
   {
     for(j=0; j< col; j++)
     {
          scanf("%d", &arr[i][j]);
     }
   }

   printf("Input matrix is\n");
   for(i=0; i<row; i++)
   {
     for(j=0;j<col;j++)
     {
	printf("%3d", arr[i][j]);
     }
   printf("\n");
  }

  /* computing row sum */
  for(i=0; i<row; i++)
  {
	rowsum = Addrow(arr,i,col);
	printf("Sum of row %d = %d\n", i+1, rowsum);
  }

  for(j=0; j<col; j++)
  {
	colsum = Addcol(arr,j,row);
	printf("Sum of column  %d = %d\n", j+1, colsum);
  }

  /* computation of all elements */
  for(j=0; j< row; j++)
  {
	sumall = sumall + Addrow(arr,j,col);
  } 

  printf("Sum of all elements of matrix = %d\n", sumall);

}

/* Function to add each row */
int Addrow(int A[10][10], int k, int c)
{
  int rsum=0, i;
  for(i=0; i< c; i++)
  {
    rsum = rsum + A[k][i];
  }
  return(rsum);
}

/* Function to add each column */
int Addcol(int A[10][10], int k, int r)
{
  int csum=0, j;
  for(j=0; j< r; j++)
  {
    csum = csum + A[j][k];
  }
  return(csum);
}

/*----------------------------
Output
Enter the order of the matrix
3
3
Enter the elements of the matrix
1 2 3
4 5 6
7 8 9
Input matrix is
  1  2  3
  4  5  6
  7  8  9
Sum of row 1 = 6
Sum of row 2 = 15
Sum of row 3 = 24
Sum of column  1 = 12
Sum of column  2 = 15
Sum of column  3 = 18
Sum of all elements of matrix = 45

--------------------------------------*/


