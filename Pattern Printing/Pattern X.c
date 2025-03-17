/*WAP to print X:
                    *       *
                      *   *
                        *
                      *   *
                    *       *        */
#include<stdio.h>
int main(){
    printf("\n");
    int n;
    printf("Enter any odd number: ");//5
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==j) || (i+j==n+1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}