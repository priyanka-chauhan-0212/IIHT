#include<stdio.h>

int main(){

int maths,science,english,total;
float avg;

do{
printf("Enter marks of maths");
scanf("%d",&maths);
}while(maths<0 || maths>100);

do{
printf("Enter marks of science");
scanf("%d",&science);
}while(science <0 || science>100);

do{
printf("Enter marks of english");
scanf("%d",&english);
}while(english<0 || english>100);

total = maths + science + english;
avg = (float)total / 3;

printf("Maths\t:%d\n",maths);
printf("Science\t:%d\n",science);
printf("English\t:%d\n",english);
printf("--------------------------\n");
printf("Total\t:%d\n",total);
printf("Average\t:%.2f\n",avg);
}
