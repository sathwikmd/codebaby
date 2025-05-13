#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter teo numbers to swap:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers are:%d %d",a,b);
}
