#include<stdio.h>



main()
{
  	
  int a, b, k;

  printf("Enter value no 1= ");
  scanf("%d", &a);

  printf("Enter value no 2= ");
  scanf("%d", &b);

  k = a;
  a = b;
  b = k;
  
  printf("\nvalue of 1 is = %d", a);
  printf("\nvalue of 2 is = %d", b);

}