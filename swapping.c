#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  
  temp = first;

  
  first = second;

  
  second = temp;

  
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}/*
Enter first number: 57
Enter second number: 68

After swapping, first number = 68.00
After swapping, second number = 57.00*/
