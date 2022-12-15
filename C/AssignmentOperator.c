#include<stdio.h>

/*
 += -= *= /= %=
*/

int main(){

int a,b=5;

// Assignment
a = 5;
printf("Value of a is %d\n",a);

a = 6;
printf("Value of a is %d\n",a);

a += 2;//a = a + 2;
a += b;//a = a + b;
//a = b + 2;

printf("Value of a is %d\n",a);

a -= 3;
printf("Value of a is %d\n",a);

a++;//a += 1;//a = a + 1;
printf("Value of a is %d\n",a);

a--;
printf("Value of a is %d\n",a);

--a;
printf("Value of a is %d\n",a);

printf("Value of a is %d\n",++a);


}
