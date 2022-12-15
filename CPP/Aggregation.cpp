#include<iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
public:
    Emplopyee()
    {
    }
    Emplopyee(string name,float salary)
    {
        this->name = name;
        this->salary = salary;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }

    string getName()
    {
        return this->name;
    }

    float getSalary()
    {
        return this->salary;
    }

    string getEmployee()
    {
        return "Name " + this->name + " Salary " + to_string(this->salary);
    }
};

class Company
{
private:
    string companyName;
    Employee employees[3];
public:

    Company()
    {
    }
    Company(string companyName)
    {
        this->companyName = companyName;
    }

    void setSingleEmployee(int id)
    {
        id--;
        string name;
        float salary;

        cout<<"Enter name of employee "<<id+1<<"\n";
        getline(cin,name);

        cout<<"Enter salary of employee "<<id+1<<"\n";
        cin>>salary;

        cin.get();

        this->employees[id].setName(name);
        this->employees[id].setSalary(salary);
    }

    void setEmployees()
    {

        for(int i=0; i<3; i++)
        {
            string name;
            float salary;

            cout<<"Enter name of employee "<<i+1<<"\n";
            getline(cin,name);

            cout<<"Enter salary of employee "<<i+1<<"\n";
            cin>>salary;

            cin.get();

            this->employees[i].setName(name);
            this->employees[i].setSalary(salary);
        }

    }

    Employee getSingleEmployee(int id)
    {
        return this->employees[id];
    }


};

int main()
{

    Company c("IIHT");
    c.setEmployees();

    c.setSingleEmployee(3);

    cout<<c.getSingleEmployee(2).getEmployee();
}
