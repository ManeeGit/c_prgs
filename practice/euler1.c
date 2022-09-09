#include<stdio.h>
main()
{
	int sum=0,i,n;
	printf("Enter n value\n",n);
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	{
	    for(i=0;i<=n;i++)
	      {
	    	sum=sum+i;
          }
	}
	printf("Sum= ",sum);
}

