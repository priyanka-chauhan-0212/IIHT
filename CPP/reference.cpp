#include<iostream>
using namespace std;

void multiply(int &x){
    x *= 2;
}

int main(){

int a = 5;
multiply(a);

cout<<a;

}
