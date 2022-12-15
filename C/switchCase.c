#include<stdio.h>

int main()
{

    int choice;

    printf("Enter a value between 1 - 7");
    scanf("%d",&choice);

//if(choice == 1){
//    printf("Sunday");
//}
//else if(choice == 2){
//    printf("Monday");
//}
//else if(choice == 3){
//    printf("Tuesday");
//}
//else if(choice == 4){
//    printf("Wednesday");
//}
//else if(choice == 5){
//    printf("Thursday");
//}
//else if(choice == 6){
//    printf("Friday");
//}
//else if(choice == 7){
//    printf("Saturday");
//}
//else{
//    printf("Invalid choice");
//}

    switch(choice)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid");
        break;
    }


}
