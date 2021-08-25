#include <stdio.h>
int main () {
    char ch;
    printf("Enter your charecter: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9'){
        printf("%c is digit", ch);
    }
    else {
        printf("%c is not a digit", ch);
    }
    return 0;
}