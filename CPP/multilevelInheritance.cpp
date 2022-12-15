#include<iostream>
using namespace std;

/*
    parent
        |
        Child
            |
            Grand Child
*/

class Person{
private:
    string name;
public:
    Person(){
    }

    Person(string name){
        this->name = name;
    }
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }

    void display(){
        cout<<"Name : "<<this->name<<endl;
    }


};

class Cricketer: public Person{
private:
    string teamName;
public:
    Cricketer(){
    }

    Cricketer(string teamName,string name): Person(name) {
        this->teamName = teamName;
//        this->setName(name);
    }

    void setTeamName(string teamName){
        this->teamName = teamName;
    }

    string getTeamName(){
        return this->teamName;
    }

    void display(){
        Person::display();
        cout<<"TeamName : "<<this->teamName<<endl;
    }
};



class Batsman: public Cricketer{
private:
    int runs;
public:
    Batsman(){
    }

    Batsman(string teamName,string name,int runs): Cricketer(teamName,name) {
        this->runs = runs;
    }

    void setRuns(int runs){
        this->runs = runs;
    }

    int getRuns(){
        return this->runs;
    }

    void display(){
        Cricketer::display();
        cout<<"Runs : "<<this->runs<<endl;
    }
};

int main(){

Batsman c("IND","Akshay",1234);

//cout<<"Name : "<<c.getName();
//cout<<"TeamName : "<<c.getTeamName();

c.display();

}
