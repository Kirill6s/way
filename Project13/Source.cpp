#include <iostream>

using namespace std;

void task_1() {
}

void task_2() {
	int z, x;
	long long number;
	cout << "¬ведите число больше нул€: ";
	cin >> number;
	do{
		z = number % 10;
		x = number / 10;
		cout << z;
		number = x;
	} while (number > 0);
}

int main() {
	setlocale(LC_ALL, "RU");
	task_2();
	return 0;

}