#include <iostream>
using namespace std;

void task_1() {
    int a, z, x;
    int	sum = 0;
    int d = 0;
    double n = 0;
    cout << "������� �����: ";
    cin >> a;
    cout << "\n";


    while (0 < a) {
        x = a % 10;
        if (x == 0) {
            d++;
        };
        z = a / 10;
        n++;
        sum += x;
        a = z;
    }

    char ch;
    cout << "���� ������ ���������� ���� � ���� ����� ������� - z\n";
    cout << "���� ������ c���� ���� ������� - x\n";
    cout << "���� ������ c������ �������������� ���� ������� - c\n";
    cout << "���� ������ ���������� ����� ������� - v\n";
    cin >> ch;
    cout << "\n";

    switch (ch) {
    case 'z': cout << "���������� ���� � ���� �����: " << n << endl; break;
    case 'x': cout << "����� ���� � ���� �����: " << sum << endl; break;
    case 'c': cout << "C������ �������������� ���� � ���� �����: " << sum / n << endl; break;
    case 'v': cout << "���������� ����� � ���� �����: " << d << endl; break;
    default: cout << "�� ���������� ���� ";
    }
}

void task_2() {
    int d = 8; char bukva;
    for (int i = 0; i < 8; i++) {

        for (int b = 0; b < 8; b++) {
            bukva = b + 97;
            cout << bukva << d << " ";

        }

        d--;
        cout << endl;

    }
}

void task_3() {
    const int blueberry_muffin = 210;
    int kolvo1;

    const int raspberry_muffin = 170;
    int kolvo2;

    const int grape_muffin = 170;
    int kolvo3;

    const int coffee = 130;
    int kolvo4;

    const int tea = 300;
    int kolvo5;

    const int morse = 190;
    int kolvo6;

    double final_summa = 0;
    double cheque;
    double preliminary_summa = 0;
    char ch;
    int guest;

    cout << "�� ������� ������� �����? ";
    cin >> guest;
    for (int d = 0; d < guest; d++) {
        kolvo1 = 0;
        kolvo2 = 0;
        kolvo3 = 0;
        kolvo4 = 0;
        kolvo5 = 0;
        kolvo6 = 0;
        cheque = 0;
        cout << "��� ������� ��������? ( b - ��������� ����,\n\t\t\tr - ��������� ����,\n"
            << "\t\t\tg - ����������� ����,\n\t\t\tc - ����� ����,\n\t\t\tt - ����� ���,\n\t\t\tm - ����� ����� )" << endl;
        cin >> ch;
        switch (ch) {
        case 'b':cout << "������� ������� ��������� ������? ";
            cin >> kolvo1; break;
        case 'r':cout << "������� ������� ��������� ������? ";
            cin >> kolvo2; break;
        case 'g':cout << "������� ������� ����������� ������? ";
            cin >> kolvo3; break;
        case 'c':cout << "������� ������� ����� ����? ";
            cin >> kolvo4; break;
        case 't':cout << "������� ������� ����� ���? ";
            cin >> kolvo5; break;
        case 'm':cout << "������� ������� ����� �����? ";
            cin >> kolvo6; break;
        default: cout << "������� ����� �� ������� � ���� " << endl;
        }
        cheque = (blueberry_muffin * kolvo1) + (raspberry_muffin * kolvo2) +
            (grape_muffin * kolvo3) + (coffee * kolvo4) + (tea * kolvo5) + (morse * kolvo6);
        preliminary_summa += cheque;
    }

    for (int d = 0; d < guest; d++) {
        kolvo1 = 0;
        kolvo2 = 0;
        kolvo3 = 0;
        kolvo4 = 0;
        kolvo5 = 0;
        kolvo6 = 0;
        cheque = 0;
        cout << "������� ���-�� ��������? ";
        cin >> ch;
        if (ch == 'Y' || ch == 'y') {
            cout << "��� ������� ��������? ( b - ��������� ����,\n\t\t\tr - ��������� ����,\n"
                << "\t\t\tg - ����������� ����,\n\t\t\tc - ����� ����,\n\t\t\tt - ����� ���,\n\t\t\tm - ����� ����� )" << endl;
            cin >> ch;
            switch (ch) {
            case 'b': cout << "������� ������� �������� ��������� ������? ";
                cin >> kolvo1; break;
            case 'r': cout << "������� ������� �������� ��������� ������? ";
                cin >> kolvo2; break;
            case 'g': cout << "������� ������� �������� ����������� ������? ";
                cin >> kolvo3; break;
            case 'c': cout << "������� ������� �������� ����� ����? ";
                cin >> kolvo4; break;
            case 't': cout << "������� ������� �������� ����� ���? ";
                cin >> kolvo5; break;
            case 'm': cout << "������� ������� �������� ����� �����? ";
                cin >> kolvo6; break;
            default: cout << "������� ����� �� ������� � ���� " << endl;
            }
            cheque = (blueberry_muffin * kolvo1) + (raspberry_muffin * kolvo2) +
                (grape_muffin * kolvo3) + (coffee * kolvo4) + (tea * kolvo5) + (morse * kolvo6);
            preliminary_summa += cheque;
        }
    }
    final_summa += preliminary_summa;
    cout << "�������� ����� ������ ������ ���� ��������: " << final_summa << " ������" << endl;
}

void task_4() {
    int d = 0; char bukva;
    for (int i = 0; i < 10; i++) {

        for (int b = 0; b < 10; b++) {
            bukva = b + 65;
            cout << bukva << d << " ";

        }

        d++;
        cout << endl;

    }
}


int main() {
	setlocale(LC_ALL, "RU");
	task_1();
    system("pause");
	return 0;
}