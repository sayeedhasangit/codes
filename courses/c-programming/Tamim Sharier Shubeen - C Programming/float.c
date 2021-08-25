#include <stdio.h>
int main () {
    float f;
    printf("Enter your float number: ");
    scanf("%f", &f);
    printf("The float number you enter: %0.4f", f);
    return 0;
}