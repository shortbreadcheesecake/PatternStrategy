#include <iostream>

using namespace std;

class Animal {
public:
    virtual void eat() = 0;
};
class Dog : public Animal {
public:
    void eat() override {
        cout << "Собака съела мясо и кости" << endl;
    }
};
class Cat : public Animal {
public:
    void eat() override {
        cout << "Кошка съела рыбу и молоко" << endl;
    }
};
class FoodDispenser {
public:
    void feed(Animal* animal) {
        animal->eat();
    }
};