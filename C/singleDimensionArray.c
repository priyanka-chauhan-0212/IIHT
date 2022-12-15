#include<stdio.h>

int main(){

/*//declaration
float salary[12];
*/

/*//initialization
float salary[] = {1000,1100};
*/

/*//initialization
float salary[12] = {1000,1100};
*/

float salary[12];
float total=0;
int month;


for(int i=0;i<12;i++){
printf("Enter salary of month %d  ",(i+1));
scanf("%f",&salary[i]);
total += salary[i];
}

//for(int i=0;i<12;i++){
//    printf("month %d   %.0f\n",(i+1),salary[i]);
//}
//
//printf("Total : %f",total);

printf("Enter the number of month you want to find salary of");
scanf("%d",&month);

printf("Salary is %f",salary[month-1]);


}
