#include<stdio.h>
int main(){

 //printf("%d",(5+3));

 int a,b,ans;
 char op = '%';

 printf("Enter a");
 scanf("%d",&a);

  printf("Enter b");
 scanf("%d",&b);

// printf("%d",(a + 2));

//adding 2 numbers
 ans = a + b;
 printf("%d + %d = %d\n",a,b,ans);

 ans = a - b;
 printf("%d - %d = %d\n",a,b,ans);

 ans = a * b;
 printf("%d * %d = %d\n",a,b,ans);

ans = a / b;
 printf("%d / %d = %d\n",a,b,ans);

ans = a % b;
 printf("%d %c %d = %d\n",a,op,b,ans);




}
