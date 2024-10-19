//Tell if it is pass or fail

#include <stdio.h>

main() 
{
    int marks;
    printf("Enter the student's marks (out of 100): ");
    scanf("%d", &marks);

    
    if(marks >= 40)
    {
        printf("The student has passed with %d marks.\n", marks);
    } 
    else 
    {
        printf("The student has failed with %d marks.\n", marks);
    }

}
