#include<stdio.h>

typedef struct Person
{
    char name[20];
    int age;
} Person;


//scanning data of person
void setPerson(Person *a)
{
    printf("Enter name:\t");
    gets(a->name);

    printf("Enter age:\t");
    scanf("%d",&a->age);
}

void printPerson(Person a){
       printf("Name is %s. Age is %d\n",a.name,a.age);
}


int main()
{

//struct Person
    Person p;
setPerson(&p);
 printPerson(p);

}
