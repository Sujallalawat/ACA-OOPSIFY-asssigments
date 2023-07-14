#include <iostream>

class Animal {
public:
    void walk() {
        std::cout << "I am walking" << std::endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        std::cout << "I am flying" << std::endl;
    }
};

int main() {
    Bird bird;
    bird.walk();
    bird.fly();

    return 0;
}
