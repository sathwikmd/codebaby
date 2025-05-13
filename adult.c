#include<stdio.h>
#include<math.h>
int main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("is an adult\n");
    }
    else
    {
        printf("not an adult\n");
    }
}
