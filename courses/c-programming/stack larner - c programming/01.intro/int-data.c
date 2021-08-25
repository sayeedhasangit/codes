#include <stdio.h>
int main (){
    short num1 = 36;
    printf("i am short - %hi\n", num1);

    int num2 = 36000;
    printf("i am int - %d\n", num2);

    long num3 = 12000L;
    printf("i am long - %ld\n", num3);

    long long num4 = 1500975152LL;
    printf("i am long - %lld\n", num4); 

    // octal int - %o (value = 0 - 7)
    int o = 0777;
    printf("i am octal - %o\n", o);
    printf("i am decimal of octal - %d\n", o);

    //hexadcimal int - %X
    int h = 0Xfff;
    printf("i am hexadcimal - %X", h);
    print("i am decimal of hexadecimal - %d\n", h);

    // unsigned short  - %hu
    unsigned short us = 41;
    printf("i am unsigned short - %hu\n", us);

    // unsigned int - %u
    unsigned int ui = 42;
    printf("i am unsigned int - %u\n", ui);

    // unsigned long
    unsigned long ul = 445454;
    printf("i am unsigned long - %lu\n", ul);

    // unsigned long long
    unsigned long long ull = 445454544;
    printf("i am unsigned long long - %llu\n", ull);

    return 0;
}