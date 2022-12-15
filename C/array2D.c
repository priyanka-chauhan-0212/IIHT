#include<stdio.h>

int main()
{

    int marks[2][5],total[2] = {0,0,0};
    float avg[2];


    for(int i=0; i<2; i++)
    {
        printf("Student %d\n\n",(i+1));
//        total[i] = 0;
        for(int j=0; j<5; j++)
        {
            printf("Enter marks of sub %d\n",(j+1));
            scanf("%d",&marks[i][j]);
            total[i] += marks[i][j];
        }
        avg[i] = total[i]/5.0;
    }


    for(int i=0; i<2; i++)
    {
        printf("Student %d\n\n",(i+1));
        printf("Subject\t\tMarks\n");
        printf("-------------------------\n");
        for(int j=0; j<5; j++)
        {
            printf("sub%d\t\t%d\n",(j+1),marks[i][j]);
        }
        printf("-------------------------\n");
        printf("Total\t\t%d\n",total[i]);
        printf("Average\t\t%.2f\n\n",avg[i]);
    }



}
