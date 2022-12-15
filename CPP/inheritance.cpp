#include<iostream>

/*
1   Single level

        p
        |
        C

2   Multi Level

        P
        |
        C
        |
        GC
        |
        GC2

3   Hierarchy level

        P
    /   |   \
    C1  C2  C3

4   Multiple

    P1  P2
     \  /
       C

5   Hybrid


*/

using namespace std;

class Person{
private:
    int age;
    string name;
protected:
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
};


class Student: public Person{
private:
    int rollNo;
public:
    void setRollNo(int rollNo){
        this->rollNo = rollNo;
    }

    void setPerson(string name,int age){
        this->setName(name);
        this->setAge(age);
    }

    int getRollNo(){
        return this->rollNo;
    }

    void display(){
        cout<<"Name :"<<this->getName()<<" Age : "<<this->getAge()<<" RollNo : "<<this->rollNo<<"\n";
    }
};

int main(){

Student s;

//s.setAge(26);
//s.setName("Jay");
s.setPerson("Akshay",26);
s.setRollNo(261);
s.display();

}
