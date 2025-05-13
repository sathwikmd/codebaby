#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,temp;
    printf("Enter two numbers to swap:\n");
    scanf("%d %d",&n1,&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("The swapped numbers are:%d %d",n1,n2);
    
}
