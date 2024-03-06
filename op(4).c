#include <stdio.h>

main() 
{
    int x, y, difference_square;

    printf("Enter the X value numbers= ");
    scanf("%d", &x);

     printf("Enter the Y value numbers= ");
    scanf("%d", &y);
    
    difference_square =  x * x + y * y - 2 * x * y;


    printf("The square of the difference between %.2d and %.2d is= %.2d\n", x, y, difference_square);

}