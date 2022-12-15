#include<stdio.h>

int main()
{

    int marks;

    printf("Enter marks");
    scanf("%d",&marks);

//    if(marks>=0 && marks<=100)
//    {
//        if(marks>75)
//        {
//            printf("Grade A");
//        }
//        else if(marks>=55)
//        {
//            printf("Grade B");
//        }
//        else if(marks>35)
//        {
//            printf("Grade Pass");
//        }
//        else
//        {
//            printf("FAIL");
//        }
//    }
//    else
//    {
//        printf("InValid marks");
//    }

    if(marks<0 || marks>100)
    {
        printf("Invalid Marks");
    }
    else
    {
        if(marks>75)
        {
            printf("Grade A");
        }
        else if(marks>=55)
        {
            printf("Grade B");
        }
        else if(marks>35)
        {
            printf("Grade Pass");
        }
        else
        {
            printf("FAIL");
        }
    }


}
