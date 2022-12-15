
#include<iostream>
using namespace std;

/*
          person
            |
          Cricketer
         |      |
     Bowler    Batsman
           \    /
        Allrounder

*/

class Person
{
private:
    string name;
public:
    Person()
    {
    }

    Person(string name)
    {
        this->name = name;
    }
//method overloading
    void setName(string name)
    {
        this->name = name;
    }

    void setName(){
        cout<<"Enter name";
        getline(cin,this->name);
    }


    string getName()
    {
        return this->name;
    }

    void display()
    {
        cout<<"Name : "<<this->name<<endl;
    }


};

class Cricketer: public Person
{
private:
    string teamName;
public:
    Cricketer()
    {
    }

    Cricketer(string teamName,string name): Person(name)
    {
        this->teamName = teamName;
//        this->setName(name);
    }

    void setTeamName(string teamName)
    {
        this->teamName = teamName;
    }

    string getTeamName()
    {
        return this->teamName;
    }

    void display()
    {
        Person::display();
        cout<<"TeamName : "<<this->teamName<<endl;
    }
};



class Batsman: public Cricketer
{
private:
    int runs;
public:
    Batsman()
    {
    }

    Batsman(string teamName,string name,int runs): Cricketer(teamName,name)
    {
        this->runs = runs;
    }

    void setRuns(int runs)
    {
        this->runs = runs;
    }

    int getRuns()
    {
        return this->runs;
    }

    void display()
    {
        Cricketer::display();
        cout<<"Runs : "<<this->runs<<endl;
    }
};



class Bowler: public Cricketer
{
private:
    int wickets;
public:
    Bowler()
    {
    }

    Bowler(string teamName,string name,int wickets): Cricketer(teamName,name)
    {
        this->wickets = wickets;
    }

    void setWickets(int wickets)
    {
        this->wickets = wickets;
    }

    int getWickets()
    {
        return this->wickets;
    }

    void display()
    {
        Cricketer::display();
        cout<<"wickets : "<<this->wickets<<endl;
    }
};


class Allrounder: public Batsman,public Bowler
{
//method overriding
public:
    void setName()
    {
        Batsman::setName();
    }

    void setName(string name)
    {
        Batsman::setName(name);
    }

    string getName()
    {
        return Batsman::getName();
    }

    void setTeamName(string teamName)
    {
        Batsman::setTeamName(teamName);
    }

    string getTeamName()
    {
        return Batsman::getTeamName();
    }

    void display(){
        Batsman::display();
        cout<<"wickets : "<<this->getWickets()<<endl;
    }
// Do the same for teamname
};
