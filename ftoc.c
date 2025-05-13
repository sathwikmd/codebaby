#include<stdio.h>
#include<math.h>
int main()
{
    float f,c;
    printf("enter the fahreheit degree:\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("the celcius degree is:%.2f",c);
}
