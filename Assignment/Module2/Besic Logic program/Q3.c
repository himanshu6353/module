#include <stdio.h>


main() 
{
	float pi=3.14;
    double radius, area, circumference;

   
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
	 
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);


}

