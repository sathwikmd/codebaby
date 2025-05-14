#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float area,perimeter,l,w;
    printf("enter the length:");
    scanf("%f",&l);
    printf("enter the width:");
    scanf("%f",&w);
    area=l*w;
    perimeter=(l+w)*2;
    printf("the area is:%f\n",area);
    printf("the perimeter is:%f\n",perimeter);
    return 0;
}
