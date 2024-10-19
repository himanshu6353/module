//Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
main()
{

    int num[5],i,j;
    printf("Enter 5 numbers: ");
    for( i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    for( i = 0; i < 5; i++) {
        long long fact = 1;
        for( j = 1; j <= num[i]; j++) {
            fact *= j;
        }
        printf("Factorial of %d is: %lld\n", num[i], fact);
	}

}
