/* Write a C program to read A (MxN), find the transpose *
 * of a given matrix and output both the input matrix and*
 * the transposed matrix.				 */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,M,N;
    int A[10][10], B[10][10];

    int transpose(int A[][10], int r, int c);  /*Function prototype*/

    clrscr();

    printf("Enter the order of matrix A\n");
    scanf("%d %d", &M, &N);

    printf("Enter the elements of matrix\n");
    for(i=0;i<M;i++)
    {
      for(j=0;j<N;j++)
      {
	 scanf("%d",&A[i][j]);
      }
    }

    printf("Matrix A is\n");
    for(i=0;i<M;i++)
    {
      for(j=0;j<N;j++)
      {
	 printf("%3d",A[i][j]);
      }
      printf("\n");
    }

    /* Finding Transpose of matrix*/
    for(i=0;i<M;i++)
    {
      for(j=0;j<N;j++)
      {
	 B[i][j] =  A[j][i];
      }
    }

    printf("Its Transpose is\n");
    for(i=0;i<M;i++)
    {
      for(j=0;j<N;j++)
      {
	 printf("%3d",B[i][j]);
      }
      printf("\n");
    }

} 	/*End of main()*/
/*---------------------------------------
Output
Enter the order of matrix A
3 3
Enter the elements of matrix
1
2
3
4
5
6
7
8
9
MatrixxA is
  1  2  3
  4  5  6
  7  8  9
Its Transpose is
  1  4  7
  2  5  8
  3  6  9
-----------------------------*/



