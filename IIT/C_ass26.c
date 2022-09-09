/* Write a C program to read two matrices A (MxN) and B(MxN)*
 * and perform addition OR subtraction of A and B. Find the *
 * trace of the resultant matrix. Output the given matrix,  *
 * their sum or Differences and the trace.		    */

#include <stdio.h>
#include <conio.h>

void main()
{
      int A[10][10], B[10][10], sumat[10][10], diffmat[10][10];
      int i, j, M,N, option;

      void trace (int arr[][10], int M, int N);

      clrscr();

      printf("Enter the order of the matrice A and B\n");
      scanf("%d %d", &M, &N);

      printf("Enter the elements of matrix A\n");
      for(i=0; i<M; i++)
      {
	  for(j=0; j<N; j++)
	  {
		scanf("%d",&A[i][j]);
	  }
      }

      printf("MATRIX A is\n");
      for(i=0; i<M; i++)
      {
	 for(j=0; j<N; j++)
	 {
	   printf("%3d",A[i][j]);
	 }
	 printf("\n");
      }

      printf("Enter the elements of matrix B\n");
      for(i=0; i<M; i++)
      {
	  for(j=0; j<N; j++)
	  {
		scanf("%d",&B[i][j]);
	  }
      }

      printf("MATRIX B is\n");
      for(i=0; i<M; i++)
      {
	 for(j=0; j<N; j++)
	 {
	   printf("%3d",B[i][j]);
	 }
	 printf("\n");
      }

      printf("Enter your option: 1 for Addition and 2 for Subtraction\n");
      scanf("%d",&option);

      switch (option)
      {
       case 1: for(i=0; i<M; i++)
	       {
		   for(j=0; j<N; j++)
		   {
			 sumat[i][j] = A[i][j] + B[i][j];
		   }
	       }

	       printf("Sum matrix is\n");
	       for(i=0; i<M; i++)
	       {
		   for(j=0; j<N; j++)
		   {
			 printf("%3d",sumat[i][j]) ;
		   }
		   printf("\n");
	       }

	       trace (sumat, M, N);
	       break;

	case 2:for(i=0; i<M; i++)
	       {
		   for(j=0; j<N; j++)
		   {
			 diffmat[i][j] = A[i][j] - B[i][j];
		   }
	       }

	       printf("Difference matrix is\n");
	       for(i=0; i<M; i++)
	       {
		   for(j=0; j<N; j++)
		   {
			 printf("%3d",diffmat[i][j]) ;
		   }
		   printf("\n");
	       }

	       trace (diffmat, M, N);
	       break;
	}

}    /* End of main() */

/*Function to find the trace of a given matrix and print it*/

void trace (int arr[][10], int M, int N)
{
   int i, j, trace = 0;
   for(i=0; i<M; i++)
   {
      for(j=0; j<N; j++)
      {
	  if (i==j)
	  {
	     trace = trace + arr[i][j];
	  }
      }
   }
   printf ("Trace of the resultant matrix is = %d\n", trace);

}
/*-----------------------------------
Enter the order of the matrice A and B
2 2
Enter the elements of matrix A
1 1
2 2
MATRIX A is
  1  1
  2  2
Enter the elements of matrix B
3 3
4 4
MATRIX B is
  3  3
  4  4
Enter your option: 1 for Addition and 2 for Subtraction
1
Sum matrix is
  4  4
  6  6
Trace of the resultant matrix is = 10
---------------------------------------------*/





