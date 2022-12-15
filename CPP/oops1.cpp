#include<iostream>
using namespace std;

//class -> struct
class student
{
public:
// properties
    int age,maths,eng,sci,total;
    string name;
};

int main()
{
// s -> object
    student s; // default constructor
    s.name = "Sumit";
    s.age = 26;
    s.maths = 66;
    s.eng = 67;
    s.sci = 68;
    s.total = s.maths + s.eng + s.sci;

    cout<<"Name : "<<s.name;
    cout<<"Age : "<<s.age;
    cout<<"maths : "<<s.maths;
    cout<<"eng : "<<s.eng;
    cout<<"sci : "<<s.sci;
    cout<<"total : "<<s.total;
}
