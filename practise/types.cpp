#include <iostream>
#include <string>
using namespace std;

void showDataTypes() {
    int age;
    double height;
    char initial;
    string name;
    
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш возраст (целое число): ";
    cin >> age;
    cout << "Введите ваш рост (в метрах, например 1.75): ";
    cin >> height;
    cout << "Введите первую букву вашей фамилии: ";
    cin >> initial;
    
    cout << "\n--- Ваши данные ---" << endl;
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << " лет" << endl;
    cout << "Рост: " << height << " м" << endl;
    cout << "Инициал фамилии: " << initial << endl;
}

int main() {
    showDataTypes();
    return 0;
}
