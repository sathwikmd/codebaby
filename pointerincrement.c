#include<stdio.h>
int main()
{
int arr[] = {100, 200, 300};
int *ptr = arr;

ptr++; 

printf("%d\n", *ptr);  
return 0;
}
