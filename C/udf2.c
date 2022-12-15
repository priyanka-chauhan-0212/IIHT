#include<stdio.h>

//without param with return

int multiplication()
{
    int x,y;
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");
    scanf("%d",&y);

    return x*y;
}

//without param without return

void division(){
    int x,y;
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");
    scanf("%d",&y);

    printf("Division is %d\n",x/y);
}

int main()
{
    printf("Multiplication is %d\n",multiplication());
    division();

}

