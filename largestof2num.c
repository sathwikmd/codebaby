#include<stdio.h>
#include<math.h>
int main()
{
int a,b,largest;
printf("Enter two numbers to find the largest of two:\n");
scanf("%d %d",&a,&b);
if(a>b || b<a)
{
    printf("the largest number is=%d",a);
}
else
{
    printf("the largest number is=%d",b);
}
return 0;
}
