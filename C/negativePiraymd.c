#include<stdio.h>

int main()
{

int n=5;

    for(int i=1; i<=n; i++)
    {

        for(int k=1; k<i; k++)
        {
            printf(" ");
        }
        for(int j=n; j>=i; j--)
        {
            printf("* ");

        }

        printf("\n");
    }


}
