#include <stdio.h>

main()
 {
    char name[5][50];
    float salary[5], totalSalary = 0.0;
	int i;
    for (i = 0; i < 5; i++)
	 {
        printf("Enter employee %d's name: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter employee %d's salary: ", i + 1);
        scanf("%f", &salary[i]);

        totalSalary += salary[i];
    }

    float averageSalary = totalSalary / 5;

    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

}
