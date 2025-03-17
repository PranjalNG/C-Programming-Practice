// WAP to input basic salary of an employee, than calculate formula and criteria. Where TA=2%, DA=3%, HRA=5%, TAX=4% of basic salary.

#include<stdio.h>
int main()
{
    float bs,ta,da,hra,tax,ts;

    printf("Enter any number:");
    scanf("%f",&bs);

    ta=.02*bs;
    da=.03*bs;
    hra=.05*bs;
    tax=.04*bs;

    ts=bs+ta+da+hra-tax;

    printf("TA= %.2f\n",ta);
    printf("DA= %.2f\n",da);
    printf("HRA= %.2f\n",hra);
    printf("TAX= %.2f\n",tax);
    printf("Total Salary= %.2f\n",ts);

    return 0;
}