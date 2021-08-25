#include <stdio.h>
int main () {
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if(number>0){
        printf("number is positive");
    }
    else if(number == 0) {
        printf("The number is zero");
    }
    else {
        printf("The number is negative");
    }
    return 0;
}