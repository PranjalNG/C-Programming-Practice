/*WAP to print Star Plus:
                        *  
                        *  
                    * * * * *
                        *
                        *       */
#include<stdio.h>
int main(){
    printf("\n");
    int n;
    printf("Enter any odd number:");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1 || j==n/2+1){
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