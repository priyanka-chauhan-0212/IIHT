#include<stdio.h>

/*


without param with return
without param without return
*/

//with param with return
int addition(int x,int y){
return x+y;
}

//with param without return
void subtraction(int x,int y){
printf("Subtraction is %d\n",x-y);
}

int main(){

int num1=6,num2=7,ans;
ans = addition(2,num2); // x=2 y=7 x+y=9  ans=9

printf("Addition is %d\n",ans);

subtraction(num2,num1); // x=7 y=6

}


