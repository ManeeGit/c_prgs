/* Write a C program read a sentence and count the number of *
 * number of vowels and consonants in the given sentence.    *
 * Output the results on two lines with suitable headings    */

#include <stdio.h>
#include <conio.h>

void main()
{
   char sentence[80];
   int i, vowels=0, consonants=0, special = 0;

   clrscr();

   printf("Enter a sentence\n");
   gets(sentence);

   for(i=0; sentence[i] != '\0'; i++)
   {
      if((sentence[i] == 'a'||sentence[i] == 'e'||sentence[i] == 'i'||
	 sentence[i] == 'o'||sentence[i] == 'u') ||(sentence[i] == 'A'||
	 sentence[i] == 'E'||sentence[i] == 'I'|| sentence[i] == 'O'||
	 sentence[i] == 'U'))
      {
	vowels = vowels + 1;
      }
      else
      {
	consonants = consonants + 1;
      }
      if (sentence[i] =='\t' ||sentence[i] =='\0' || sentence[i] ==' ')
      {
	 special = special + 1;
      }
   }

   consonants = consonants - special;
   printf("No. of vowels in %s = %d\n", sentence, vowels);
   printf("No. of consonants in %s = %d\n", sentence, consonants);

}
/*----------------------------------------
Output
Enter a sentence
Good Morning
No. of vowels in Good Morning = 4
No. of consonants in Good Morning = 7
-----------------------------------------*/


