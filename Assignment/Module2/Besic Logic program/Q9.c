//Find circumference of Triangle
#include <stdio.h>
main()
 {
    float a, b, c, circumference;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    circumference = a + b + c;

    printf("Circumference of the triangle: %.2f units\n", circumference);
}
