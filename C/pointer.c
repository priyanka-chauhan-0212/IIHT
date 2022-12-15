#include<stdio.h>

void swapping(int *x,int *y){

int temp;
temp = *x;
*x = *y;
*y = temp;

}

void print(int z){
    printf("Number is %d",z);
}

void scan(int *m){
    printf("Enter number\n");
    scanf("%d",m);//66
}


int main(){

int a = 5, b = 6;

swapping(&a,&b);


//printf("Value of a is %d\n",a);
//printf("Value of b is %d\n",b);



print(a);
scan(&b);


printf("B is %d",b);
}
