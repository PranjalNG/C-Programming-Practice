#include <stdio.h>
int main() {
    int a = 10;
    int *p,**q;
    p=&a;
    q=&p;

    printf("Value of a = %d\n",a);//10
    printf("Address of a = %u\n",&a);//100
    printf("Value of p = %u\n",p);//100
    printf("Address of p = %u\n",&p);//200
    printf("Value of q = %u\n",q);
    printf("Address of q = %u\n",&q);
    printf("%d\n",*p);//10
    printf("%d\n",**q);//10

    return 0;
}