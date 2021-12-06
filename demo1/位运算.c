#include<stdio.h>

int main(){
    int a = 1;
    a<<=1;
    a&=3; // 10&11 = 10
    a|=3; // 10|11 = 11
    int b = 1;
    b = ~b;
    printf("%d",b);
    return 0;
}