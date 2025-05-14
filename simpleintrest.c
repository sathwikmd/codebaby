#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter the principle amount:\n");
    scanf("%f",&p);
    printf("enter the intrest:\n");
    scanf("%f",&r);
    printf("enter the time(in years):\n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("the simple intrest is:%f",si);
    return 0;
}
