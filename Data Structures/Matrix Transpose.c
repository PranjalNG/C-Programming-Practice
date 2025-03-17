#include<stdio.h>
#define r 2
#define c 3
int main()
{
    int i,j,a[r][c],b[r][c];
    printf("Enter elements in 2D Array:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
             b[i][j]=a[j][i];//to transpose the matrix
        }
    }

    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d",b[i][j]);
        }
    }

    return 0;
}