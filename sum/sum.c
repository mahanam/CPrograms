#include <stdio.h>
int main()
{
    // Declaration of the variables
    int i4Num1;
    int i4Num2;
    int i4SumResult;

    printf("Enter the num1:");
    scanf("%d", &i4Num1);

    printf("Enter the num2:");
    scanf("%d", &i4Num2);

    // Main sum logic
    i4SumResult = i4Num1 + i4Num2;

    // Printing the sum output
    printf("Result of 2 given numbers is %d\n", i4SumResult);

    // exit from the main
    return 0;
}


/*
 * Output:
 * -------
 * Enter the num1: 12
 * Enter the num2: 23
 * Result of 2 given numbers is 35
 * /
