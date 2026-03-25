#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double u;
    int N;

    cout << "Вычисление S_u = ln((1 + 1/u)^u) с помощью степенного ряда" << endl;
    cout << "Введите u (|u| >= 1): ";
    cin >> u;
    cout << "Введите количество членов ряда N: ";
    cin >> N;

    if (u == 0) {
        cerr << "u не может быть равно нулю." << endl;
        return 1;
    }

    double x = 1.0 / u;
    if (fabs(x) > 1.0) {
        cout << "|u| >= 1." << endl;
    }

    double sum_ln = 0.0;
    double x_pow = x;
    for (int n = 1; n <= N; ++n) {
        double term = (n % 2 == 1 ? 1.0 : -1.0) * x_pow / n;
        sum_ln += term;
        x_pow *= x;
    }

    double S_u = u * sum_ln;

    cout << fixed << setprecision(10);
    cout << "\nСумма " << N << " членов ряда для ln(1+1/u) = " << sum_ln << endl;
    cout << "S_u = u * ln(1+1/u) = " << S_u << endl;

    double exact_ln = log(1.0 + 1.0/u);
    double exact_S = u * exact_ln;
    cout << "S_u = " << exact_S << endl;


    return 0;
}
