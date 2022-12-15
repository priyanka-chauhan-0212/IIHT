#include<stdio.h>

int main(){

float p,r,n;
float simpleInterest;

printf("Enter p\n");
scanf("%f",&p);

printf("Enter r\n");
scanf("%f",&r);

printf("Enter n\n");
scanf("%f",&n);

simpleInterest = p*r*n/100;


FILE *fp; // *fp -> value  fp -> address
fp = fopen("demo.txt","a"); // write -> w, append -> a, read -> r

fprintf(fp,"Principal Amount is %f\n",p);
fprintf(fp,"Rate of Interest is %f\n",r);
fprintf(fp,"Number of years is %f\n",n);
fprintf(fp,"----------------------------\n");
fprintf(fp,"Simple Interest is %f\n\n",simpleInterest);

fclose(fp);
}
