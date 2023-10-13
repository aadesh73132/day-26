#include <stdio.h>
int main()
{
    char op;
    int num1,num2;

    printf("enter the operation '+','-' \n");
    scanf("%c",&op);

    printf("enter the number 1\n");
    scanf("%d",&num1);

    printf("enter the number 2\n");
    scanf("%d",&num2);
   
   
    switch (op)
    {
    case '+':
        printf("%d",num1+num2);
        break;
    
    case '-':
        printf("%d",num1-num2);
        break;
    
    default:
         printf("no operation");
        break;
    }
    return 0;
}
