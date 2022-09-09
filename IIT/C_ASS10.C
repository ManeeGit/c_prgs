/*Write a C program to generate and print first N FIBONACCI numbers*/

#include <stdio.h>

void main()
{
  int   fib1=0, fib2=1, fib3, N, count=0;

  printf("Enter the value of N\n");
  scanf("%d", &N);

  printf("First %d FIBONACCI numbers are ...\n", N);
  printf("%d\n",fib1);
  printf("%d\n",fib2);
  count = 2;           /* fib1 and fib2 are already used */

  while( count < N)
  {
    fib3 = fib1 + fib2;
    count ++;
    printf("%d\n",fib3);
    fib1 = fib2;
    fib2 = fib3;
  }
} 	/* End of main() */

/*--------------------------
Enter the value of N
10
First 5 FIBONACCI numbers are ...
0
1
1
2
3
5
8
13
21
34
-------------------------------*/

