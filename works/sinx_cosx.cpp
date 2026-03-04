#include <iostream>
#include <cmath>
using namespace std;

double calculateSinX(double** ptr) {
    return sin(**ptr);
}

double calculateCosX(double** ptr) {
    return cos(**ptr);
}

double calculateTanX(double** ptr) {
    return sin(**ptr) / cos(**ptr);
}

int main() {
    double x;
    
    cout << "Введите значение x в радианах: ";
    cin >> x;
    
    double* pX = &x;
    
    cout << "sin(x) = " << calculateSinX(&pX) << endl;
    cout << "cos(x) = " << calculateCosX(&pX) << endl;
    cout << "tan(x) = " << calculateTanX(&pX) << endl;
    
    return 0;
}
