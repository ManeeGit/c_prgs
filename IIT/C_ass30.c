/* Write a  C program to read an English sentence and replace*
 * lowercase characters by uppercase and vice-versa. Output  *
 * the given sentence as well as the case covrted sentence on*
 * two different lines.					     */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

main()
{
  char sentence[100];
  int count, ch, i;

  clrscr();

  printf("Enter a sentence\n");
  for(i=0; (sentence[i] = getchar())!='\n'; i++)
  {
    ;
  }

  sentence[i]='\0';

  count = i; /*shows the number of chars accepted in a sentence*/

  printf("The given sentence is   : %s",sentence);

  printf("\nCase changed sentence is: ");
  for(i=0; i < count; i++)
  {
    ch = islower(sentence[i]) ? toupper(sentence[i]) : tolower(sentence[i]);
    putchar(ch);
   }

} /*End of main()*/
/*------------------------------
Output
Enter a sentence
Mera Bharat Mahan
The given sentence is   : Mera Bhaaat Mahan
Case changed sentence is: mERA bHARAT mAHAN
------------------------------------------------*/
