#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main() {
    // ������������ ��� �������� ������� �����
    locale::global(locale("uk_UA.UTF-8"));
    wcin.imbue(locale());
    wcout.imbue(locale());

    double b;  // ������� ��������
    double z1, z2;  // ���������� ����������

    // �������� �������� b
    wcout << L"������ �������� b: ";
    wcin >> b;

    // ��������, �� ����� ����������� �������
    if (b * b - 4 < 0 || b + 2 < 0) {
        wcout << L"�������: ��������� ������ �� ������ ���� ��'������." << endl;
        return 1;
    }

    // ���������� ������� �� ���������
    z1 = sqrt(2 * b + 2 * sqrt(b * b - 4)) / sqrt(b * b - 4 + b + 2);
    z2 = 1 / sqrt(b + 2);

    // ��������� ����������
    wcout << L"z1 = " << z1 << endl;
    wcout << L"z2 = " << z2 << endl;

    return 0;
}