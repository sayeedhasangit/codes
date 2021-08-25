#include <stdio.h>
int main () {
    int num1, num2, sum;
    printf("Enter the value of num1 and num2 : ");
    scanf("%d %d", &num1, &num2);
    // printf("Enter the value of num2 : ");
    // scanf("%d", &num2);
    sum = num1 + num2;
    printf ("The value of %d + %d equals to %d\n", num1, num2, sum);
    return 0;
}