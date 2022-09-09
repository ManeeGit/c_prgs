/* Write a C program to read two strings and concatenate them *
 * (without using library functions). Output the concatenated *
 * string along with the given string			      */

 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
 
void main()
 {
     char string1[20], string2[20];
     int i,j,pos;

     strset(string1, '\0'); /*set all occurrences in two strings to NULL*/
     strset(string2,'\0');

     printf("Enter the first string :");
     gets(string1);
     fflush(stdin);

     printf("Enter the second string:");
     gets(string2);

     printf("First string  = %s\n", string1);
     printf("Second string = %s\n", string2);

     /*To concate the second stribg to the end of the string
       travserse the first to its end and attach the second string*/

      for (i=0; string1[i] != '\0'; i++)
      {
	;      /*null statement: simply trvsering the string1*/
      }

      pos = i;

      for (i=pos,j=0; string2[j]!='\0'; i++)
      {
	   string1[i] = string2[j++];
      }

      string1[i]='\0';   /*set the last character of string1 to NULL*/

      printf("Concatenated string = %s\n", string1);
}
/*---------------------------------------
Output
Enter the first string :CD-
Enter the second string:ROM
First string  = CD-
Second string = ROM
Concatenated string = CD-ROM
----------------------------------------*/
