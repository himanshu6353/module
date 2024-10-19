// Find circumference of Rectangle
#include <stdio.h>

main() 
{
    float length, width, circumference;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    circumference = 2 * (length + width);

    printf("Circumference of the rectangle: %.2f units\n", circumference);

}
