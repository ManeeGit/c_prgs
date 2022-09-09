#include<stdio.h>

main() {  
  int i,a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array  
  int val = 41; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = linearSearch(a, n, val); // Store result  
  printf("The elements of the array are - ");  
  for ( i = 0; i < n; i++)  
  printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  

  }
  
