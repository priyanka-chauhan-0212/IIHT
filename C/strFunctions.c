#include<stdio.h>
#include<string.h>
/*  strlen -> finds length
    strcpy -> string copy
    strcat -> string concatination
    strrev -> string reverse
    strupr -> uppercase
    strlwr -> lowercase
*/

/*
firstname   hello
lastname    world

fullname    hello world
*/

int main(){

char name[20],data[] = "World";
int len;

//printf("Enter name");
//gets(name);

//len = strlen(name);
//printf("Length is %d",len);

strcpy(name,"Hello");  // name = Hello, data = World
strcat(name," ");
strcat(name,data); // name = HelloWorld, data = World

printf("Uppercase : %s\n",strupr(name));
printf("Lowercase : %s\n",strlwr(name));
printf("Reverse   : %s\n",strrev(name));
}
