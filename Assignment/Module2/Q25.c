#include <stdio.h>
main() 
{
    float expense[5], totalExpense = 0.0;
	int i;
    for (i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expense[i]);

        totalExpense += expense[i];
    }

    float averageExpense = totalExpense / 5;

    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

}
