// WAP to print fibonacci number till nth term.
//This program was given in C lab file, which was provided by Himanshu Pant Sir.

#include<stdio.h>
int main()
{
    int n,first=0,second=1,next,c=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    while(c<=n-1)
    {
        if(c<=1)
        {
            next=c;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d ",next);
        c++;
    }

    return 0;
}