#include <stdio.h>
// start function
int minimum (int num1, int num2) {
    int minimumNumber;
    if (num1 < num2) {
        minimumNumber = num1;
    }
    else{
        minimumNumber = num2;
    }
    return minimumNumber;
}
// main program
int main () {
    int num1, num2, smallNumber;

    printf("Enter the value: ");
    scanf("%d %d", &num1, &num2);

    smallNumber = minimum(num1, num2);
    printf("The smallest number is: %d", smallNumber);

    return 0;
}