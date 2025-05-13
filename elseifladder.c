#include<stdio.h>
#include<math.h>
int main()
{
    int marks;
    printf("ENter the  marks:\n");
    scanf("%d",&marks);
    if(marks>=30 && marks<=100)
    {
        printf("pass\n");
    }
    else if(marks<30)
    {
        printf("fail\n");
    }
    else
    {
        printf("Invalid marks\n");
    }
    return 0;
}
