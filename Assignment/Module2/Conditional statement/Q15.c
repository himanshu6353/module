// candidate is eligible or not

#include <stdio.h>

main()
{
    int maths, phy, chem;
    printf("Enter marks in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);

    int total = maths + phy + chem;
    int maths_phy = maths + phy;

    if ((maths >= 65) && (phy >= 55) && (chem >= 50) && (total >= 190 || maths_phy >= 140)) 
    {
        printf("The candidate is eligible.\n");
    } 
    else 
    {
        printf("The candidate is not eligible.\n");
    }

}
