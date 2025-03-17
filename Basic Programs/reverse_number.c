// WAP to reverse any number
#include<stdio.h>
int main()
{
    int n,r=0,on;
    printf("Enter any number:");
    scanf("%d",&n);

    on=n;

    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }

    printf("Original number is %d\n",on);
    printf("Reversed number is %d\n",r);

    printf("Sum of Original and Reversed number is: %d\n",on+r);

    return 0;
}