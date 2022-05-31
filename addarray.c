#include<stdio.h>

int main()
{
   
    int arr[100], size, i, sum = 0;
    
    
    printf("Enter array size\n");
    scanf("%d",&size);
    
    
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}
/*
Enter array size
3
Enter array elements
1 2 3
Sum of the array = 6*/
