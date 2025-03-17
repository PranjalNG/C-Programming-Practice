#include<stdio.h>
int prime(int);
int main(){
    int n,p;

    printf("Enter any number: ");
    scanf("%d",&n);

    p=prime(n);

    if(p==1){
        printf("Number is Prime. ");
    }
    else if(p==0){
        printf("Number is not Prime. ");
    }

    return 0;
}

int prime(int n){
    if(n==1){
        return 0;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}