#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("The enterd character '%c' is digit\n",ch);
    }
    else
    {
        printf("The eneterd character '%c' is not digit\n",ch);
    }
    return 0;
}
