#include<stdio.h>

int main(){

// declaration
int age;
float salary;
char group;

//printf("Enter age:\t");
//scanf("%d",&age);
//
//printf("Enter salary:\t");
//scanf("%f",&salary);


printf("Enter age and salary and group");
scanf("%d %f %c",&age,&salary,&group);


//printf("Enter group:\t");
//fflush(stdin);
//scanf("%c",&group);

printf("My age is %d. And my salary is %.2f. And my group is %c",age,salary,group);

}
