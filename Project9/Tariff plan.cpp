#include <iostream>
using namespace std;

void tariff_plan() {
    cout << "������� �������� ��������� ��������� �����: ";
    int n;
    cin >> n;

    enum {
        Internet = 500,
        MegaTerif = 600,
        Maximum = 750,
        VIP = 1000,
        Premium = 2000
    };

    switch (n) {
    case 'I': cout << "C���� ������������� ��������� ���������� ������ = " << Internet * 6 << " ������"; break;
    case MegaTerif: cout << "C���� ������������� ��������� ���������� ������ = " << n * 6 << " ������"; break;
    case Maximum: cout << "C���� ������������� ��������� ���������� ������ = " << n * 6 << " ������"; break;
    case VIP: cout << "C���� ������������� ��������� ���������� ������ = " << n * 6 << " ������"; break;
    case Premium: cout << "C���� ������������� ��������� ���������� ������ = " << n * 6 << " ������"; break;
    default: cout << "�������� ���� � �������� �������� ���������� �����������.";
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    tariff_plan();
    return 0;
}