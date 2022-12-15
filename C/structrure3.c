#include<stdio.h>

typedef struct Person
{
    char name[20];
    int age;
} Person;


//scanning data of person
void setPerson(Person a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Enter name:\t");
        fflush(stdin);
        gets(a[i].name);

        printf("Enter age:\t");
        scanf("%d",&a[i].age);
    }
}

void printPerson(Person a[],int n)
{
    for(int i =0; i<n; i++)
    {
        printf("Name is %s. Age is %d\n",a[i].name,a[i].age);
    }
}


int main()
{
    int n;
    printf("Enter number of persons\n");
    scanf("%d",&n);
    //struct Person
    Person p[n]; // p[0] p[1] p[2]
    setPerson(p,n);
    printPerson(p,n);

}

