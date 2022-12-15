#include<stdio.h>

int main()
{

    char ch,data[100];
    FILE *fp,*fp1; // *fp -> value  fp -> file address
    fp = fopen("fileRead.c","r");
    fp1 = fopen("fileCopy.c","w");

    // scan data from file
    // print data on console

//    while(!feof(fp)){
//    fscanf(fp,"%c",&ch);
//    printf("%c",ch);
//    }

//    do
//    {
//        fscanf(fp,"%s",data);
//        printf("%s ", data);
//    }
//    while(!feof(fp));

//    while(fscanf(fp,"%s",data)!=EOF)
//    {
//        printf("%s", data);
//    }

//    do
//    {
//        fgets(data,20,fp);
//        printf("%s", data);
//    }
//    while(!feof(fp));

//    while(fgets(data,100,fp)!=NULL)
//    {
//        printf("%s", data);
//    }

//    while((ch = fgetc(fp))!= EOF)
//    {
//        printf("%c", ch);
//    }

//    ch = fgetc(fp);
//    while(ch!=EOF)
//    {
//        printf("%c", ch);
//        ch = fgetc(fp);
//    }

//    do
//    {
//        ch = fgetc(fp);
//        printf("%c", ch);
//    }while(ch!=EOF);

    do
    {
        ch = fgetc(fp);
        fprintf(fp1,"%c", ch);
    }while(!feof(fp));

    fclose(fp);
    fclose(fp1);
}
ÿ