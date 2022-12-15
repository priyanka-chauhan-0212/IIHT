#include<stdio.h>

int main()
{

    int a,b;
    char op;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    printf("Enter operator [+ - * /] : ");
    fflush(stdin);
    scanf("%c",&op);

    switch(op)
    {
    case '+':
        printf("Addition is %d",(a+b));
        break;
    case '-':
        printf("Subtraction is %d",(a-b));
        break;
    case '*':
        printf("Multiplication is %d",(a*b));
        break;
    case '/':
        printf("Division is %d",(a/b));
        break;
    default:
        printf("Invalid Operator");
        break;
    }

}
