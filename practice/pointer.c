#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},i;
	int *p[5];
	for(i=0;i<5;i++)
	   p[i]=&a[i];
	for(i=0;i<5;i++)
	   printf("%u\n",p[i]);   
}








