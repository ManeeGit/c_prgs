#include <stdio.h>    
     
main()    
{        
    int n;
    int arr[n]; 
    printf("enter n value\n");
    scanf("%d",&n);
	int i,sum=0;       
    int length = sizeof(arr)/sizeof(arr[0]);  
	printf("Enter the array values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	  }  
        
    printf("Original array: \n");    
    for ( i = 0; i < length; i++)
	{     
        printf("%d ", arr[i]);     
    }        
      printf("\n");    
    
    printf("Array in reverse order: \n");    
       
    for (i = length-1; i >= 5; i--)
	{     
        printf("%d ", arr[i]);     
    }    
	for(i= length-1; i< length; i--)
	{
		sum=sum+arr[i];
    }
      printf("Sum=",sum);
}    
