//circumference of square 
#include <stdio.h>

main() {
    float radius, circumference, pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * pi * radius;

    printf("The circumference of the circle is: %.2f\n", circumference);
}
