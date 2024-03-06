#include <stdio.h>

main() 
{
    int x, y;

    printf("Enter the value of x numbers= ");
    scanf("%d", &x);
    
    printf("Enter the value of y numbers= ");
    scanf("%d", &y); 
    
    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping, the value of x is= %d\n" ,x);
    printf("After swapping, the value of y is= %d" ,y);

}