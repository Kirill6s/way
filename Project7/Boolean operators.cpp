#include <iostream>

void task_1() {
	std::cout << "������� �����: ";
	int a;
	std::cin >> a;
	bool h1 = a % 2 == 0;
	std::cout << h1;
}

void task_2() {
	std::cout << "������� ������ �����: ";
	int a;
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	int b;
	std::cin >> b;
	bool h1 = (a > b);
	if (h1 == 1 ) {
		std::cout << a;
	}
	else {
		std::cout << b;
	}
}

void task_3() {
	std::cout << "������� ������ �����: ";
	int a;
	std::cin >> a;
	bool h1 = (a > 0);
	bool h2 = (a < 0);
	bool h3 = (a == 0);
	if (h1) {
		std::cout << "��������� ����� ������������";
	}
	if (h2) {
		std::cout << "��������� ����� ������������";
	}
	if (h3) {
		std::cout << "��������� ����� ����� ����";
	}
}

void task_4() {
	std::cout << "������� ������ �����: ";
	int a;
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	int b;
	std::cin >> b;
	bool h1 = (a == b);
	bool h2 = (a > b);
	bool h3 = (a < b);
	if (h1) {
		std::cout << "��������� ����� �����" << "\n";
	}
	if (h2) {
		std::cout << b << " " << a << "\n";
	}
	if (h3) {
		std::cout << a << " " << b << "\n";
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	task_1();
	task_2();
	task_3();
	task_4();
	return 0;
}