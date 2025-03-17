#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,i;
    FILE *a,*b,*c,*d;
    a=fopen("a.txt","w");
    b=fopen("b.txt","w");
    c=fopen("c.txt","w");
    d=fopen("d.txt","w");

    printf("Enter any string: ");
    gets(s);

    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            fputc(s[i],a);
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            fputc(s[i],b);
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            fputc(s[i],c);
        }
        else
        {
            fputc(s[i],d);
        }
    }

    fclose(a);
    fclose(b);
    fclose(c);
    fclose(d);

    return 0;
}