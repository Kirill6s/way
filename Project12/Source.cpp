#include <iostream>

using namespace std;

void task_1() {
	int z, x, c, number, kolvo;
	kolvo = 0;
	number = 100;
	while (number < 1000){
	z = number / 100;
	x = (number % 100) / 10;
	c = (number % 100) % 10;
	number++;
	if (z == x || z == c || x == c) {
		kolvo++;
		}
	}
	cout << "Количество целых чисел, у которых есть две одинаковые цифры: "<< kolvo;
}

void task_2() {
	int z, x, c, number, kolvo;
	kolvo = 0;
	number = 100;
	while (number < 1000) {
		z = number / 100;
		x = (number % 100) / 10;
		c = (number % 100) % 10;
		number++;
		if (z != x && z != c && x != c) {
			kolvo++;
		}
	}
	cout << "Количество целых чисел, у которых все цифры разные: " << kolvo;
}

void task_3() {
	long long number, z, x;
	long long numbernew = 0;
	int discharge = 0;
	cout << "Введите число: ";
	cin >> number;
	while (number > 0) {
		z = number % 10;
		x = number / 10;
		if (z != 3 && z != 6) {
			numbernew += z * pow(10, discharge);
			discharge++;
		}
	number = x;
	}cout << numbernew;
}

void task_4() {
	int number, x, z;
	int divider = 1;
	cout << "Введите число: ";
	cin >> number;
	
	while (divider < number) {
		x = pow(divider, 2);
		z = pow(divider, 3);
		if (number % x == 0 && number % z != 0) {
			cout << divider << " ";
			
		}
		divider++;
		
	}
}
	
void task_5() {
	int number, cube, square, x, z;
	int summ = 0;
	cout << "Введите число: ";
	cin >> number; //Подходящее положительному исходу, число 27

	square = pow(number, 2);

	while (number > 0) {
		z = number % 10;
		x = number / 10;
		summ += z;
		number = x;
	}
	cube = pow(summ, 3);

	if (cube == square) {
		cout << "Да, куб суммы цифр равен A*A";
	}
	else {
		cout << "Нет, куб суммы цифр не равен A*A";
	}
}

void task_6() {
	int a;
	int b = 1;
	cout << "Введите число: ";
	cin >> a;
	while (b <= a) {
		
		if (a % b == 0) {
			cout << b << " ";
			b++;
		}
		else {
			b++;
		}
	}
}

void task_7() {
	int a, b;
	int c = 1;
	cout << "Введите 1-ое число: ";
	cin >> a;
	cout << "Введите 2-ое число: ";
	cin >> b;
	while (c <= a || c <= b) {

		if (a % c == 0 && b % c == 0) {
			cout << c << " ";
			c++;
		}
		else {
			c++;
		}
	}


}


int main() {
	setlocale(LC_ALL, "RU");
	task_7();
	
	return 0;
}