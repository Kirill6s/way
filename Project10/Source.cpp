#include <iostream>
using namespace std;

void task1(){
	cout << "������� �����: ";
    int a; 
    int summa = 0;
	cin >> a;
    while (a < 500) {
        summa += a;
        a++;
    }
    cout << "����� ����� ����� = " << summa << endl;
}

void task2() {
    cout << "������� ����� �: ";
    int x;
    cin >> x;
    cout << "������� ����� y: ";
    int y;
    cin >> y;
    cout << pow(x, y) << endl;
}

void task3() {
    int a = 1;
    int b = 0;
    double summa = 0;
    while (a <= 1000) {
        summa += a;
        a++;
        b++; 
    }
    cout << "C������ �������������� = " << summa/b << endl;
}

void task4() {
    cout << "������� �������� �: ";
    int a;
    cin >> a;
    long long proisvedenije = 1;
    while (a <= 20) {
        proisvedenije *= a;
            a++;
    }
    cout << "������������ = " << proisvedenije << endl;
}

void task5() {
    cout << "������� ����� ��������: ";
    int k;
    cin >> k;
    int a = 0;
    while (a <= 10) {

        cout << a << " * " << k << " = " << a * k << "\n";
        a++;
    }
}

int main() {
	setlocale(LC_ALL, "RU");
    task1();  
	return 0;
}