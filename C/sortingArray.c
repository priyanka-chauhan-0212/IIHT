#include<stdio.h>

int main(){
//                 0   1 2  3 4 5  6
//int numbers[] = {12,33,5,44,6,13,0};
//                 5,33,12,44,6,13,0
//                 0,33,12,44,6,13,5
//
//                 0,12,33,44,6,13,5
//                 0,6,33,44,12,13,5
//                 0,5,33,44,12,13,6
//
//                 0,5,12,44,33,13,6
//                 0,5,6,44,33,13,12
//
//                 0,5,6,33,44,13,12
//                 0,5,6,13,44,33,12
//                 0,5,6,12,44,33,13
//
//                 0,5,6,12,33,44,13
//                 0,5,6,12,13,44,33
//
//                 0,5,6,12,13,33,44
// max index 6
// length 7

//int number[] = {12,33,5,44,6,13,0};


int n;

printf("Enter number of elements");
scanf("%d",&n);

int number[n];


for(int i=0;i<n;i++){
    printf("Enter number %d\t",(i+1));
    scanf("%d",&number[i]);
}


for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
//        number[i] 12 0
//        number[j] 33 1

        if(number[j]>number[i]){
            int temp = number[i]; // temp 12  number[i] 12  number[j] 5
            number[i] = number[j]; // temp 12  number[i]  5  number[j] 5
            number[j] = temp;     // temp 12  number[i]  5  number[j] 12
        }

    }
}

for(int i=0;i<n;i++){
    printf("%d\t",number[i]);
}




}
