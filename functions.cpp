#include <iostream>
#include <string>
using namespace std;

string printDivisionSeries()
{
    int n = 1;
    
    for (int i = 0; i < 5; i++)
    {
        double result = 1.0 / n;
        cout << "1 / " << n << " = " << result << endl;
        n++;
    }
    
    return "\nЗакончено выполнение функции 'printDivisionSeries'.";
}

int main()
{
    string message = printDivisionSeries();
    cout << message << endl;
    return 0;
}
