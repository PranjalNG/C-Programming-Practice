/*WAP to print A B C D
               A B C D
               A B C D
               A B C D*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n;j++){
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}