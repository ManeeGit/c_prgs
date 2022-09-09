 /* Write a C program to read a string and check whether it is    *
  * a palindrome or not (without using library functions). Output *
  * the given string along with suitable message		  */

 #include <stdio.h>
 #include <conio.h>
 #include <string.h>

 void main()
 {
	char string[25], revString[25]={'\0'};
	int  i,length = 0, flag = 0;

	clrscr();

	fflush(stdin);

	printf("Enter a string\n");
	gets(string);

	for (i=0; string[i] != '\0'; i++) /*keep going through each */
	{                                 /*character of the string */
	    length++;                     /*till its end */
	}

	for (i=length-1; i >= 0 ; i--)
	{
	   revString[length-i-1] = string[i];
	}

	/*Compare the input string and its reverse. If both are equal
	  then the input string is palindrome. Otherwise it is
	  not a palindrome */

	for (i=0; i < length ; i++)
	{
	   if (revString[i] == string[i])
		 flag = 1;
	   else
		 flag = 0;
	}

	if (flag == 1)
	   printf ("%s is a palindrome\n", string);
	else
	   printf("%s is not a palindrome\n", string);

 }   /*End of main()*/

/*----------------------------------------------------
Output
RUN 1
Enter a string
madam
madam is a palindrome

RUN 2
Enter a string
Madam
Madam is not a palindrome

RUN 3
Enter a string
good
good is not a palindrome
----------------------------------------------------------*/

