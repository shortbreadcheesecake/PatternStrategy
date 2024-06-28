#include<pattern.h>

int main() {

    setlocale(LC_ALL, "Russian");
    Cat cat;
    Dog dog;
    FoodDispenser dispenser;

    cout << "Кормим кошку:" << endl;
    dispenser.feed(&cat);
    cout << "Кошка сыта" << endl;

    cout << "\nКормим собаку:" << endl;
    dispenser.feed(&dog);
    cout << "Собака сыта" << endl;

    return 0;
}