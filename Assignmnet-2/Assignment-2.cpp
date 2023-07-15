/*
1. Using inheritance, one class can acquire property of others. Consider the following animal class:-
class Animal()
{
    public:
    void walk()
    {
        cout<<"I am walking"<<endl;
    }
};
implement the Bird class which inherits the animal class and implement the flying function in it.
Input:-
bird.walk();
bird.fly();

Output:-
I am walking
I am flying
*/


//code your solution here(You may increase the space and work efficiently and properly)

#include <iostream>
using namespace std;

class Animal
{
public:
    void walk()
    {
        cout << "I am walking" << endl;
    }
};

class Bird : public Animal
{
public:
    void fly()
    {
        cout << "I am flying" << endl;
    }
};

int main()
{
    Bird bird;
    bird.walk();
    bird.fly();

    return 0;
}


/*
2. When a subclass inherits from a superclass, it will also inherits its methods however, it can 
also overrides the superclass methods(as well as declare and implement new one).
Consider sports class:-

class Sports
{
    public:
    string getname()
    {
        return "all sports";
    }
    void getTeamMembers()
    {
        cout<<"Each team has n player in "+ getname()<<endl;
    }
};
*/

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
