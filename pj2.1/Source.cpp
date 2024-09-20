#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main() {
    // Налаштування для підтримки широких рядків
    locale::global(locale("uk_UA.UTF-8"));
    wcin.imbue(locale());
    wcout.imbue(locale());

    double b;  // вхідний параметр
    double z1, z2;  // результати обчислення

    // Введення значення b
    wcout << L"Введіть значення b: ";
    wcin >> b;

    // Перевірка, чи можна обчислювати формули
    if (b * b - 4 < 0 || b + 2 < 0) {
        wcout << L"Помилка: підкореневі вирази не можуть бути від'ємними." << endl;
        return 1;
    }

    // Обчислення значень за формулами
    z1 = sqrt(2 * b + 2 * sqrt(b * b - 4)) / sqrt(b * b - 4 + b + 2);
    z2 = 1 / sqrt(b + 2);

    // Виведення результатів
    wcout << L"z1 = " << z1 << endl;
    wcout << L"z2 = " << z2 << endl;

    return 0;
}