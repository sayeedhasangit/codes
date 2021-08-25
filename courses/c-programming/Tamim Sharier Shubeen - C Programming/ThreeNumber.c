#include <stdio.h>
// start function
int minimum (int num1, int num2, int num3) {
    int minimumNumber;
    if (num1 < num2 && num1 < num3) {
        minimumNumber = num1;
    }
    else if(num2 < num3 && num2 < num1){
        minimumNumber = num2;
    }
    else{
        minimumNumber = num3;
    }
    return minimumNumber;
}
// main program
int main () {
    int num1, num2, num3, smallNumber;

    printf("Enter the value: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    smallNumber = minimum(num1, num2, num3);
    printf("The smallest number is: %d", smallNumber);

    return 0;
}