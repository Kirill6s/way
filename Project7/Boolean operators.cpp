#include <iostream>

void task_1() {
	std::cout << "¬ведите число: ";
	int a;
	std::cin >> a;
	bool h1 = a % 2 == 0;
	std::cout << h1;
}

void task_2() {
	std::cout << "¬ведите первое число: ";
	int a;
	std::cin >> a;
	std::cout << "¬ведите второе число: ";
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
	std::cout << "¬ведите первое число: ";
	int a;
	std::cin >> a;
	bool h1 = (a > 0);
	bool h2 = (a < 0);
	bool h3 = (a == 0);
	if (h1) {
		std::cout << "¬веденное число положительно";
	}
	if (h2) {
		std::cout << "¬веденное число отрицательно";
	}
	if (h3) {
		std::cout << "¬веденное число равно нулю";
	}
}

void task_4() {
	std::cout << "¬ведите первое число: ";
	int a;
	std::cin >> a;
	std::cout << "¬ведите второе число: ";
	int b;
	std::cin >> b;
	bool h1 = (a == b);
	bool h2 = (a > b);
	bool h3 = (a < b);
	if (h1) {
		std::cout << "¬веденные числа равны" << "\n";
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