// Check if all abngles make a traiangle

#include <stdio.h>

int main() 
{
    int angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%d", &angle1);

    printf("Enter second angle: ");
    scanf("%d", &angle2);

    printf("Enter third angle: ");
    scanf("%d", &angle3);

    if (angle1 + angle2 + angle3 == 180) 
    {
        printf("The angles can form a triangle.\n");
    } 
    else 
    {
        printf("The angles cannot form a triangle.\n");
    }

}
