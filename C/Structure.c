#include<stdio.h>

struct student{
char name[20];
int maths,science,english,total;
};

int main(){
struct student s;

printf("Enter name: ");
gets(s.name);
do{
printf("Enter maths marks: ");
scanf("%d",&s.maths);
}while(s.maths>100 || s.maths<0);

do{
printf("Enter science marks: ");
scanf("%d",&s.science);
}while(s.science>100 || s.science<0);

do{
printf("Enter english marks: ");
scanf("%d",&s.english);
}while(s.english>100 || s.english<0);

s.total = s.english + s.science + s.maths;

printf("Name : %s\n",s.name);
printf("Maths : %d\n",s.maths);
printf("English : %d\n",s.english);
printf("Science : %d\n",s.science);
printf("Total : %d\n",s.total);

}
