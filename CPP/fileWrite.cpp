#include<iostream>
#include<fstream>
/*
fstream -> file stream

ifstream -> input file stream -> read
ofstream -> output file stream -> write/append
*/
using namespace std;

int main(){
    int age;
    string name;

    cout<<"Enter name";
    getline(cin,name);

    cout<<"Enter age";
    cin>>age;

    ofstream ofs("demo.txt",ios::app);
    ofs<<"My name is "<<name;
    ofs<<" my age is "<<age<<endl;
    ofs.close();


}
