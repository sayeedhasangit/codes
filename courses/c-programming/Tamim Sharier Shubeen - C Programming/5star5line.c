#include <stdio.h>
int main () {

    int i, j;
    for (i=0; i<5; i=i+1){
        for (j=0; j<i+1; j=j+1){
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}