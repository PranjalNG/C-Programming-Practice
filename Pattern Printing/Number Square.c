/*WAP to print 1 3 5 7
               1 3 5 7
               1 3 5 7
               1 3 5 7*/

#include<stdio.h>
int main(){
    printf("\n");
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}