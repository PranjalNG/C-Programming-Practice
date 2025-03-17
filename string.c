//WAP to input any string by using krun time initialization.

#include<stdio.h>
int main()
{
    char x[10];
    printf("Enter any string: ");
    scanf("%s",x);//gets(x);
    printf("String is: %s",x);
    return 0;
}