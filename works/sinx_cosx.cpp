#include <iostream>
#include <cmath>
using namespace std;

double calculateSinX(double* x) {
    return sin(*x);
}

double calculateCosX(double* x) {
    return cos(*x);
}

double calculateTanX(double* x) {
    return sin(*x) / cos(*x);
}

int main() {
    double x;
    
    cout << "Введите значение x в радианах: ";
    cin >> x;
    
    cout << "sin(x) = " << calculateSinX(&x) << endl;
    cout << "cos(x) = " << calculateCosX(&x) << endl;
    cout << "tan(x) = sin(x)/cos(x) = " << calculateTanX(&x) << endl;
    
    return 0;
}
