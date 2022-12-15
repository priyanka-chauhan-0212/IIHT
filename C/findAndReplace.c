#include<stdio.h>

int main()
{

    char name[20],find,replace;
    int len=0;

    printf("Enter your name");
    gets(name);

    while(name[len] != '\0')
    {
        len++;
    }


    printf("Enter char to find");
    fflush(stdin);
    scanf("%c",&find);

    printf("Enter replacement char");
    fflush(stdin);
    scanf("%c",&replace);


    for(int i=0; i<len; i++)
    {
        if(name[i]==find)
        {
            name[i] = replace;
        }
    }


    printf("Your updated name is %s\n",name);


}

