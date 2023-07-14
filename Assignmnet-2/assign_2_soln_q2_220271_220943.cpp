#include <iostream>

class Sports {
public:
    std::string getname() {
        return "all sports";
    }

    void getTeamMembers() {
        std::cout << "Each team has n players in " << getname() << std::endl;
    }
};

class Football : public Sports {
public:
    std::string getname() {
        return "football";
    }
};

int main() {
    Football football;
    football.getTeamMembers();

    return 0;
}
