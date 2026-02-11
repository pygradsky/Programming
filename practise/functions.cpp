#include <iostream>
#include <string>
using namespace std;

int countRowSum()
{
    int n;
    int sum = 0;
    
    cout << "Введите число до которого будем считать натуральный ряд" << endl;
    cin >> n;
    cout << "Введенное число: " << n << endl;
    
    for (int i = 1; i < n; i++)
    {
        sum += i;
        cout << "Текущее число: " << i << endl;
    }
    
    return sum;
}

int main()
{
    int result = countRowSum();
    cout << "Сумма ряда: " << result << endl;
    return 0;
}
