#include<iostream> // cout -> printf  cin -> scanf
using namespace std;

int main(){

int age=15;
float salary = 15000;
string name;

cout<<"Enter name";
//cin>>name;
getline(cin,name);

cout<<"Enter age and Enter salary"<<endl;
cin>>age>>salary;

//cout<<"Enter salary\n";
//cin>>salary;

cout<<"My name is "<<name<<"My age is "<<age<<". My salary is "<<salary;

}
