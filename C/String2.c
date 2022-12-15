#include<stdio.h>

int main()
{

    char name[20],find;
    int len=0,counter=0;

    printf("Enter your name");
    gets(name);


    while(name[len] != '\0')
    {
        len++;
    }

//    printf("Length of your name is %d\n",len);

    printf("Enter char to find");
    scanf("%c",&find);



    for(int i=0; i<len; i++)
    {
        if(name[i]==find)
        {
            counter++;
        }
    }


    printf("Total number of of %c is %d\n",find,counter);


}
