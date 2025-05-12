#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,per;
   printf("enter the lenght and breadth to calculate the perimeter of triangle:\n");
   scanf("%d %d",&a,&b);
   per=(a+b)*2;
   printf("The perimeter of rectangle is:%d",per);
return 0;
}
