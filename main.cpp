#include<pattern.h>

int main() {

    setlocale(LC_ALL, "Russian");
    Cat cat;
    Dog dog;
    Cow cow;
    FoodDispenser dispenser;

    int choice;
    cout << "Кого вы хотите покормить?" << endl;
    cout << "1. Кошку" << endl;
    cout << "2. Собаку" << endl;
    cout << "3. Корову\n" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "\nКормим кошку:" << endl;
        dispenser.feed(&cat);
        cout << "Кошка сыта" << endl;
        break;
    case 2:
        cout << "\nКормим собаку:" << endl;
        dispenser.feed(&dog);
        cout << "Собака сыта" << endl;
        break;
    case 3:
        cout << "\nКормим корову:" << endl;
        dispenser.feed(&cow);
        cout << "Корова сыта" << endl;
        break;
    default:
        cout << "Некорректный выбор." << endl;
    }

    return 0;
}
