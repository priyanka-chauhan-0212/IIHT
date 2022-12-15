#include"player.h"

class Team
{

    string color;
    Allrounder allrounder[3];
public:
    Team(string color)
    {
        this->color = color;
    }

    void setAllPlayers()
    {
        for(int i=0; i<3; i++)
        {
  string teamName,name;
        int runs,wickets;

        cout<<"Enter name";
        getline(cin,name);
        cout<<"Enter teamName";
        getline(cin,teamName);
        cout<<"Enter runs";
        cin>>runs;
        cout<<"Enter wickets";
        cin>>wickets;
        cin.get();


        this->allrounder[i].setName(name);
        this->allrounder[i].setTeamName(teamName);
        this->allrounder[i].setRuns(runs);
        this->allrounder[i].setWickets(wickets);
        }
    }

    void setSinglePlayer(int i)
    {
        string teamName,name;
        int runs,wickets;

        cout<<"Enter name";
        getline(cin,name);
        cin.get();
        cout<<"Enter teamName";
        getline(cin,teamName);
        cout<<"Enter runs";
        cin>>runs;
        cout<<"Enter wickets";
        cin>>wickets;

        this->allrounder[i].setName(name);
        this->allrounder[i].setTeamName(teamName);
        this->allrounder[i].setRuns(runs);
        this->allrounder[i].setWickets(wickets);

    }

    Allrounder getAllRounder(int i)
    {
        return this->allrounder[i];
    }

};


int main()
{

    Team t("BLUE");

    t.setAllPlayers();
    t.setSinglePlayer(1);
    t.getAllRounder(1).display();




}
