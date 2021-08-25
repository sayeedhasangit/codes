#include <stdio.h>
int main() {

    float num1, num2, result;

    printf("enter your first number: \n");
    scanf("%f", &num1);

    printf("enter you secont number: \n");
    scanf("%f", &num2);
    
    result = num1 + num2;
    printf("%.2f + %.2f = %.2f", num1, num2, result);

    return 0;
}