#include <stdio.h>
int main () {
    int num;
    char grade;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num >= 80) {
        grade = 'A+';
        printf("Your Grade is %c\n", grade);
    }
    else if (num >= 70) {
        grade = 'A';
        printf("Your Grade is %c\n", grade);
    }
    else if (num >= 60) {
        grade = 'A-';
        printf("Your Grade is %c\n", grade);
    }
    else if (num >= 50) {
        grade = 'B';
        printf("Your Grade is %c\n", grade);
    }
    else if (num >= 40) {
        grade = 'C';
        printf("Your Grade is %c\n", grade);
    }
    else if (num >= 30) {
        grade = 'D';
        printf("Your Grade is %c\n", grade);
    }
    else{
        printf("Your Gade is F\n");
    }

    return 0;
}