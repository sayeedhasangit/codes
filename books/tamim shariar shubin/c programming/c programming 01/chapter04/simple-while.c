#include <stdio.h>
int main (){
    int num = 1;
    while (num <= 100){
        printf("%d\n", num);
        num++;

        if(num > 15){
            break;
        }
    }
    return 0;
}