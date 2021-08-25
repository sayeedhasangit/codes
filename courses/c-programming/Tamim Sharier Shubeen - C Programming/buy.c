#include <stdio.h>
int main (){
    int shoePrice;
    printf("Enter your shop price: ");
    scanf("%d", &shoePrice);

    if(shoePrice == 1000){
        printf("I will buy this Shoes");

        if(shoePrice > 1000){
            printf("Ask for discount");
        }
        else if(shoePrice != 1500){
            printf("see another shoes");
        }
    }
    else if (shoePrice == 2000){
        printf("check another shop");
    }
    else{

        if(shoePrice == 1200 || shoePrice == 1300){
            printf("buy this shoes👞 :)");
        }
    }
    return 0;
}