#include<stdio.h>

int main(){

int num;

printf("Enter a num");
scanf("%d",&num);

for(int i=0;i<10;i++){
    printf("%d * %d = %d\n",num,(i+1),(num*(i+1)));
}

}
