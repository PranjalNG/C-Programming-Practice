#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,temp,rem;
    printf("Enter any number: ");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        rem=n%10;
        sum+=(rem*rem*rem);
        n=n/10;
    }

    if(temp==sum){
        printf("Number is an Armstrong number.");
    }
    else{
        printf("Number is not an Armstrong number.");
    }

    return 0;
}