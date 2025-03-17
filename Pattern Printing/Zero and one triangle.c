#include<stdio.h>
int main(){
    printf("\n");
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}