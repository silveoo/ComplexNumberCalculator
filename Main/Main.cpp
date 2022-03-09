#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    complex a;
    complex b;
    int choice;
    cout << "Введите 2 комплексных числа: сначала введите действительную часть первого числа, потом его мнимую часть. То же самое сделайте со вторым числом." << endl;
    cin >> a.re >> a.i >> b.re >> b.i;
    cout << endl;
    cout << "Выбирете опцию: " << endl << "1 - Сложение" << endl << "2 - Вычитание" << endl << "3 - Умножение" << endl << "4 - Деление" << endl << "0 - Выход" << endl << endl;
    cin >> choice;
    cout << endl;

    switch (choice) {
    case 1: pluss(a, b);
        break;
    case 2: minuss(a, b);
        break;
    case 3: ymnoj(a, b);
        break;
    case 4: delen(a, b);
        break;
    case 0: break;
    }
}
