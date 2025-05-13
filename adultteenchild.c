#include<stdio.h>
#include<math.h>
int main()
{
    int age;
    printf("enter the age:\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Adult\n");
    }
    else if(age>14 && age<18)
    {
        printf("teenager");
    }
    else
    {
        printf("child\n");
    }
    return 0;
}
