#include<stdio.h>

int main()
{

    int A[3][3];
    int B[3][3];
    int num;

    printf("Enter scalar number\t");
    scanf("%d",&num);

    for(int i=0; i<3; i++)
    {
        printf("Enter data of A\n\n");
        for(int j=0; j<3; j++)
        {
            printf("Enter the element\t");
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            B[i][j] = num * A[i][j];
        }
    }

    printf("\n\nAnswer\n\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

}
