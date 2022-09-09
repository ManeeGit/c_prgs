/* Write a C program to reverse a given integer number and check     *
 * whether it is a palindrome. Output the given numbers with suitable*
 * message							     */

#include <stdio.h>
#include <conio.h>

void main()
{
  int   num, temp, digit, rev = 0;

  clrscr();

  printf("Enter an integer\n");
  scanf("%d", &num);

  temp = num;        /* original number is stored at temp */

  while(num > 0)
  {
	 digit = num % 10;
	 rev = rev * 10 + digit;
	 num /= 10;
  }

  printf("Given number is = %d\n", temp);
  printf("Its reverse is  = %d\n", rev);

  if(temp == rev )
	  printf("Number is a palindrome\n");
  else
	  printf("Number is not a palindrome\n");
}
/*------------------------
Output
RUN 1
Enter an integer
12321
Given number is = 12321
Its reverse is  = 12321
Number is a palindrome

RUN 2
Enter an integer
3456
Given number is = 3456
Its reverse is  = 6543
Number is not a palindrome
-----------------------------------*/