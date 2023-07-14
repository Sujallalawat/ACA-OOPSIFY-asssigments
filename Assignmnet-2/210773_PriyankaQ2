#include <iostream>
using namespace std;

class Sports
{
public:
    string getname()
    {
        return "all sports";
    }

    void getTeamMembers()
    {
        cout << "Each team has n players in " + getname() << endl;
    }
};

class Football : public Sports
{
public:
    string getname()
    {
        return "football";
    }
};

int main()
{
    Football football;
    football.getTeamMembers();

    return 0;
}
