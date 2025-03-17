/*WAP to print    *
                * * *
              * * * * *
            * * * * * * *      */
#include<stdio.h>
int main()
{
    int n,i,j,k;

    printf("Enter number of lines: ");
    scanf("%d",&n);

    int nst=1;//number of stars.

    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            printf("* ");
        }
        
        nst+=2;
        printf("\n");
    }

    return 0;
}