//the area of a rectangular prism
#include <stdio.h>

main()
 {
    float width, height, length, area;

    printf("Enter the width of the prism: ");
    scanf("%f", &width);

    printf("Enter the height of the prism: ");
    scanf("%f", &height);

    printf("Enter the length of the prism: ");
    scanf("%f", &length);

    area = 2 * (width * length + height * length + height * width);

    printf("Surface area of the prism: %.2f square units\n", area);
}
