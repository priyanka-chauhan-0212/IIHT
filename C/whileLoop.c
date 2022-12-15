#include<stdio.h>

int main()
{
    int a,b;
    char op;
//    char choice='y';   -> in case of while
char choice;


//    while(choice == 'y' || choice == 'Y')
//    {
//        printf("Enter a :");
//        scanf("%d",&a);
//
//        printf("Enter b :");
//        scanf("%d",&b);
//
//        printf("Enter operator + - * /:");
//        fflush(stdin);
//        scanf("%c",&op);
//
//        switch(op)
//        {
//        case '+':
//            printf("%d + %d = %d",a,b,(a+b));
//            break;
//        case '-':
//            printf("%d - %d = %d",a,b,(a-b));
//            break;
//        case '*':
//            printf("%d * %d = %d",a,b,(a*b));
//            break;
//        case '/':
//            printf("%d / %d = %d",a,b,(a/b));
//            break;
//        default:
//            printf("Invalid");
//            break;
//        }
//
//
//        printf("\nPress Y to continue");
//        fflush(stdin);
//        scanf("%c",&choice);
//
//    }



    do
    {
        printf("Enter a :");
        scanf("%d",&a);

        printf("Enter b :");
        scanf("%d",&b);

        printf("Enter operator + - * /:");
        fflush(stdin);
        scanf("%c",&op);

        switch(op)
        {
        case '+':
            printf("%d + %d = %d",a,b,(a+b));
            break;
        case '-':
            printf("%d - %d = %d",a,b,(a-b));
            break;
        case '*':
            printf("%d * %d = %d",a,b,(a*b));
            break;
        case '/':
            printf("%d / %d = %d",a,b,(a/b));
            break;
        default:
            printf("Invalid");
            break;
        }


        printf("\nPress Y to continue");
        fflush(stdin);
        scanf("%c",&choice);

    }while(choice == 'y' || choice == 'Y');


}
