#include <stdio.h>
int main () {
    int n[3];
    int i;
    printf("Enter thee number: ");
    for (i=0; i<3; i++) {  
        scanf("%d", &n[i]);
    }
    for (i=0; i<3; i++) {
        printf("%d ", n[i]);
    }
    return 0;
}
