#include<stdio.h>
#include<math.h>
int main()
{
    int marks;
    printf("Enter the  marks:\n");
    scanf("%d",&marks);
    if(marks<30)
    {
        printf("C");
    }
    else if(marks>=30 && marks<70)
    {
        printf("B");
    }
    else if(marks>=70 && marks<90)
    {
        printf("A");
    }
    else if(marks>=90 && marks<=100)
    {
        printf("A+");
    }
    else
    {
        printf("Invalid marks");
    }
    return 0;
}
