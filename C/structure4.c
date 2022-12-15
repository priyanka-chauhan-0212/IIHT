#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[20];
    int maths,eng,sci,total;
    float avg;
    char grade[10];
} student;

int calculateTotal(student a)
{
    return a.maths + a.sci + a.eng;
}

float calculateAvg(int total,int n)
{
    float avg = (float)total/n;
    return avg;
}

void setStudents(student a[],int n)
{
    for(int i=0; i<n; i++)
    {
        //scanning data
        printf("Enter name\t");
        fflush(stdin);
        gets(a[i].name);
        printf("Enter maths marks");
        scanf("%d",&a[i].maths);
        printf("Enter english marks");
        scanf("%d",&a[i].eng);
        printf("Enter sci marks");
        scanf("%d",&a[i].sci);

        //calculation
        a[i].total = calculateTotal(a[i]);
        a[i].avg = calculateAvg(a[i].total,3);
//a[i].avg = calculateAvg(calculateTotal(a[i]),3);
        calculateGrade(&a[i]);
    }
}



void calculateGrade(student *b)
{
    if(b->avg > 75)
    {
        strcpy(b->grade,"Grade A");
    }
    else if(b->avg > 55)
    {
        strcpy(b->grade,"Grade B");
    }
    else if(b->avg > 35)
    {
        strcpy(b->grade,"Pass");
    }
    else
    {
        strcpy(b->grade,"Fail");
    }
}

void printStudents(student a[],int n){
    for(int i=0;i<n;i++){
    //Printing
    printf("\nName :\t%s\n",a[i].name);
    printf("Maths :\t%d\n",a[i].maths);
    printf("Eng :\t%d\n",a[i].eng);
    printf("Sci :\t%d\n",a[i].sci);
    printf("Total :\t%d\n",a[i].total);
    printf("Avg :\t%f\n",a[i].avg);
    printf("Grade :\t%s\n\n",a[i].grade);
    }
}

int main()
{
    int n;
    printf("Enter no of students");
    scanf("%d",&n);

    student s[n];
    setStudents(s,n);
    printStudents(s,n);
}
