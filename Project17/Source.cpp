#include <iostream>

using namespace std;

void task_1() {
	int min, max;
	int array[2][5]{1,2,3,4,5,6,7,8,9,10} ;
	int summa = 0;
	double n = 0;
	min = array[0][0];
	max = array[0][0];
	for (int i = 0; i < 2; i++) {
		for (int s = 0; s < 5; s++) {
			summa += array[i][s];
			n++;

			if (min >= array[i][s]) {
				min = array[i][s];
			}
			if (max <= array[i][s]) {
				max = array[i][s];
			}
		}
	}
	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Максимальный элемент массива : " << max << endl;
	cout << "Среднее арифметическое всех элементов массива: " << summa / n << endl;
	cout << "Сумму всех элементов массива: " << summa << endl;
}

int main() {
	setlocale (LC_ALL, "RU");
	task_1();
	return 0;
}