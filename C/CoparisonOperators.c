#include<stdio.h>

int main(){

int a,b,ans;

printf("Enter value of a");
scanf("%d",&a);// 2

printf("Enter value of b");
scanf("%d",&b);// 3

ans = a > b;// 0
printf("%d > %d is %d\n",a,b,ans);

ans = a < b;// 1
printf("%d < %d is %d\n",a,b,ans);

ans = a >= b;// 2>3  2==3
printf("%d >= %d is %d\n",a,b,ans);

ans = a <= b;// 2<3  2==3
printf("%d <= %d is %d\n",a,b,ans);

ans = a == b;
printf("%d == %d is %d\n",a,b,ans);

ans = a != b;
printf("%d != %d is %d\n",a,b,ans);

}
