#include<stdio.h>
main()
{
	int sum=0,i=0;
	char a[20];
	printf("Enter string value\n");
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		printf("\nThe ascii value of %c is %d\n",a[i],a[i]);
		sum=sum+a[i];
		i++;
	}
	printf("\n\nThe sum of ascii values is:%d",sum);
}
