#include<stdio.h>
#include<math.h>
int main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);
    (age>=18)?printf("is an adult\n"):printf("not an adult\n");
    return 0;
}
