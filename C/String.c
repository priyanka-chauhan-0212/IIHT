#include<stdio.h>

int main(){

//declaration

//char name[10];

//name[0] = 'A';
//name[1] = 'K';

//initialization

//char name[10] = {'A','K','S','H','A','Y','\0'};
//char name[10] = "Akshay";

//char name[] = "Akshay";


char name[200];

printf("Enter your name");
//scanf("%s",&name[200]); // -> cant scan space
//scanf("%[^\n]",&name);
//scanf("%[^@]",&name);

gets(name);

printf("Hello %s",name);

}
