#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,A;

    printf("Enter sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c); 

    if((a+b>c) && (b+c>a)  && (c+a>b)){
        s=(float)(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the traingle is: %f",A);
    }
    else{
        printf("Invalid traingle.");
    }

    return 0;
}