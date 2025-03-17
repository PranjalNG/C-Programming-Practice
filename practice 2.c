#include<stdio.h>
int main()
{
    FILE *fp,*ab;
    fp=fopen("abc.txt","r");
    char s[100];
    fgets(s,100,fp);
    
    ab=fopen("def.txt","w");
    fputs(s,ab);

    fclose(fp);
    fclose(ab);

    return 0;
}