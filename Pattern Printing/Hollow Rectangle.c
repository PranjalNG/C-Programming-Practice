/*WAP to print Hollow Rectangle:
                    * * * * * *
                    *         *
                    *         *
                    * * * * * *        */
#include<stdio.h>
int main(){
    printf("\n");
    int r,c;
    printf("Enter no. of rows:");//4
    scanf("%d",&r);
    printf("\n");
    printf("Enter no. of columns:");//6
    scanf("%d",&c);
    printf("\n");
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || j==1 || i==r || j==c){
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