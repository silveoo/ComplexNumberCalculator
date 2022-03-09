#include "Complex.h"
#include <string>
#include <iostream>

using namespace std;

string znak(double a) {
    if (a > 0)
        return "+"; else return "";
}

void pluss(complex a, complex b) {
    double c = a.i + b.i;
    cout << "Результат сложения: " << a.re + b.re << znak(c);
    if((a.i + b.i) != 0)
        cout << a.i + b.i << "i" << endl;
}
void minuss(complex a, complex b) {
    double c = a.i - b.i;
    cout << "Результат вычитания: " << a.re - b.re << znak(c);
    if((a.i - b.i) != 0)
        cout << a.i - b.i << "i" << endl;
}
void ymnoj(complex a, complex b) {
    double c = a.i * b.i;
    cout << "Результат умножения: " << (a.re*b.re) - (a.i*b.i) << znak(c);
    if((a.re * b.i + b.re * a.i) != 0)
        cout << (a.re * b.i + b.re * a.i) << "i" << endl;
}
void delen(complex a, complex b) {
    if ((((b.re * b.re) + (b.i * b.i))) != 0) {
        double c = ((b.re * a.i - a.re * b.i) / ((b.re * b.re) + (b.i * b.i)));
        cout << "Результат деления: " << (a.re * b.re + a.i * b.i) / ((b.re * b.re) + (b.i * b.i)) << znak(c);
        if (((b.re * a.i - a.re * b.i) / ((b.re * b.re) + (b.i * b.i))) != 0)
            cout << (b.re * a.i - a.re * b.i) / ((b.re * b.re) + (b.i * b.i)) << "i" << endl;
    }
}