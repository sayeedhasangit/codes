#include <stdio.h>
int main () {

    int i,j, line;
    printf("Enter number of line: ");
    scanf("%d",&line);

    for(i=0; i<line; i++){
        for(j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}