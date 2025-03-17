#include<stdio.h>
int main(){
    int a=10;
    int &r=a;

    printf("a:%d",a);
    printf("r:%d",r);

    return 0;
}