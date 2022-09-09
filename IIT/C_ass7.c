/* write a C program to find and output all the roots of a    *
 * quadratic equation, for non-zero coefficients. In case     *
 * of errors your program should report suitable error message*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    	float A, B, C, root1, root2;
    	float realp, imagp, disc;

    	clrscr();

    	printf("Enter the values of A, B and C\n");
	scanf("%f %f %f", &A,&B,&C);

	/* If A = 0, it is not a quadratic equation */

	if( A==0 || B==0 || C==0)
    	{
		printf("Error: Roots cannot be determined\n");
		exit(1);
	 }
	 else
	 {
		disc = B*B - 4.0*A*C;
		if(disc < 0)
		{
			 printf("Imaginary Roots\n");
			 realp = -B/(2.0*A) ;
			 imagp = sqrt(abs(disc))/(2.0*A);
			 printf("Root1 = %f  +i %f\n",realp, imagp);
			 printf("Root2 = %f  -i %f\n",realp, imagp);
		}
		else if(disc == 0)
		{
			 printf("Roots are real and equal\n");
			 root1 = -B/(2.0*A);
			 root2 = root1;
			 printf("Root1 = %f  \n",root1);
			 printf("Root2 = %f  \n",root2);
		}
		else if(disc > 0 )
		{
			 printf("Roots are real and distinct\n");
			 root1 =(-B+sqrt(disc))/(2.0*A);
			 root2 =(-B-sqrt(disc))/(2.0*A);
			 printf("Root1 = %f  \n",root1);
			 printf("Root2 = %f  \n",root2);
		}
	  }

 }   /* End of main() */

 /*---------------------------
 Output
 RUN 1
 Enter the values of A, B and C
 3 2 1
 Imaginary Roots
 Root1 = -0.333333  +i 0.471405
 Root2 = -0.333333  -i 0.471405

 RUN 2
 Enter the values of A, B and C
 1 2 1
 Roots are real and equal
 Root1 = -1.000000
 Root2 = -1.000000

 RUN 3
 Enter the values of A, B and C
 3 5 2
 Roots are real and distinct
 Root1 = -0.666667
 Root2 = -1.000000
 ---------------------------------*/