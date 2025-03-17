#include<stdio.h>
#include<stdlib.h>//for malloc function
int main(){

    /*int a=10;
    int *p;//declaration of a pointer
    p=&a;
    
    printf("\n%d\n",a);
    printf("Using pointer %d\n\n",*p);//we need to write *p for dereferencing*/

    

    /*int a[5]={2,4,6,8,10};
    int *p;//whenever we declare anything in our program, it is going to be created inside the stack
    p=a;//you don't have to give $ when giving arrey. You can use p=&a[0];

    for(int i=0;i<5;i++){
        printf("%d ",p[i]);//or you can use a[i]
    }*/



    //Now let us created an array in heap
    int *p;//using a pointer we can create a array in heap
    p=(int *)malloc(5*sizeof(int));

    p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;

    for(int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
    
    free(p);//this is called deallocating the memory that is allocated in heap, so that the heap memory is deallocated (skipping this step is not a big problem but in big projects you should handle it very carefully)
    //when the program ends the heap memory will be automatically deleted
    return 0;
}