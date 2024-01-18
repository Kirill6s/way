#include <iostream>
#include <cmath>

using namespace std;

// ������� ��� ��������, ��������� �� ����� (x, y) ������ ������
bool isInsideRing(double x, double y, double r1, double r2) {
    double distance = sqrt(pow(x, 2) + pow(y, 2));
    return (distance > r1) && (distance < r2);
}

int main(double r1, double r2) {
    setlocale(LC_ALL, "ru");

    cout << "������� ���������� (x,y): ";
    double x, y;
    cin >> x >> y;

    if (isInsideRing(x, y, r1, r2)) {
        cout << "����� ��������� ������ ������." << endl;
    }
    else {
        cout << "����� �� ��������� ������ ������." << endl;
    }

    system("pause");  // ���� ������� Enter ����� ����������� ���������
    return 0;
}
