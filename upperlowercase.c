#include<stdio.h>
#include<math.h>
int main()
{
   char ch;
   printf("Enter the charcter:\n");
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z')
   {
       printf("upper case\n");
   }
   else if(ch>='a' && ch<='z')
   {
       printf("lower case\n");
   }
   else
   {
       printf("invalid character");
   }
    return 0;
}
