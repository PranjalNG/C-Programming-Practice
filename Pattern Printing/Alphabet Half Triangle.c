/*WAP to print 1
               A B 
               1 2 3
               A B C D
               1 2 3 4 5*/

#include<stdio.h>
int main(){
    printf("\n");
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",a);
            }
            else{
                printf("%d ",a-64);
            }
            a+=1;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}