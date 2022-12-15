#include<iostream>
using namespace std;

class student
{
private:
    //Data Hiding
    int age,maths,eng,sci,total;
    string name;

public:
    //default constructor
    student()
    {
        age = 0; //default value
    }

    //parameterized constructor
    student(string name,int age)
    {
        this->age = age;
        this->name = name;
        this->total = 0;
    }

    student(int age,int maths,int eng,int sci,string name)
    {
        this->age = age;
        this->maths = maths;
        this->sci = sci;
        this->eng = eng;

    }

    void displayStudent()
    {
        cout<<"age is "<<this->age;
    }

    void setAge(int age)
    {
        if(age > 0)
        {
            this->age = age;
        }
    }

    void calculateTotal()
    {
        this->total = this->maths + this->sci + this->eng;
    }

    int getTotal()
    {
        return this->total;
    }


    int getAge()
    {
        return this->age;
    }

};



int main()
{
    student s,t("Akshay",26),r(23,24,25,26,"Sumit");// default constructor

//    s.name = "SName";
//    s.maths = -999;
//    s.age = -26;
//
//    cout<<"s "<<s.age<<"\t";
//    cout<<"t "<<t.age<<"\t";
//    cout<<"r "<<r.age<<"\t";

//    r.setAge(-56);
//    cout<<r.getAge();


//r.displayStudent();
//t.displayStudent();


    r.calculateTotal();
    cout<<" Total : "<<r.getTotal();

}

