#include<stdio.h>
int main()
{
int arr[4] = {1,2,3,4};
int *ptr = &arr[3]; 

ptr--;  

printf("%d\n", *ptr);  

return 0;
}
