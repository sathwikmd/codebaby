#include<stdio.h>
#include<math.h>
int main()
{
   int op1,op2;
   printf("Enter two numbers:\n");
   scanf("%d %d",&op1,&op2);
   if(op1<op2 || op2>op1)
   {
   printf("The smallest of two number is:%d\n",op1);
   }
   else
   {
       printf("The smallest of two number is:%d\n",op2);
   }
    return 0;
}
