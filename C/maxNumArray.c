#include<stdio.h>

int main(){

int n;
printf("Enter number of elements");
scanf("%d",&n);//5

int numbers[n];//numbers[0] to numbers[4]
int max;
int min;

for(int i=0;i<n;i++){
    printf("Enter the number\t");
    scanf("%d",&numbers[i]);// 12 32 55 70 90
}

max = numbers[0]; // max = 12
min = numbers[0];

for(int i=0;i<n;i++){
    if(numbers[i]>max){     //90 > 70
        max = numbers[i];   // max = 90
    }
    if(numbers[i]<min){
        min = numbers[i];
    }
}

printf("Maximum number is %d\n",max);
printf("Minimum number is %d\n",min);


}
