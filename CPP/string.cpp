#include<iostream>
using namespace std;

int main(){

string firstName = "Hello",lastName,fullName;
int age = 26;

firstName = "Akshay";
lastName = "Soni";

fullName = firstName + " " + lastName + ".Age : " + to_string(age);

cout<<fullName.length();


}
