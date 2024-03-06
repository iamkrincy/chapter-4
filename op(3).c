#include <stdio.h>

main() 
{
    int x, y, sum_square;

    printf("Enter the X value numbers= ");
    scanf("%d" , &x);

    printf("Enter the Y value numbers= ");
    scanf("%d", &y);
    
    sum_square = x * x + y * y + 2 * x * y;

    printf("The square of the sum of %.2d and %.2d is: %.2d\n", x, y, sum_square);

}