#include<iostream>
#include<fstream>
using namespace std;

int main(){
string data;

ifstream ifs("demo.txt");

 while(getline(ifs,data)){
    cout<<data<<endl;
 }

ifs.close();

}
