#include <stdio.h>

main()
 {
    int x, y, cube_of_sum;

    printf("Enter the X value numbers= ");
    scanf("%d", &x);
    
    printf("Enter the Y value numbers= ");
    scanf("%d", &y);

    cube_of_sum = x * x * x + y * y * y + 3 * x * x * y + 3 * x * y * y;

    printf("The cube of the sum of %.2d and %.2d is= %.2d\n", x, y, cube_of_sum);

}