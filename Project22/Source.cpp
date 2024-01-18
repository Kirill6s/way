#include <iostream>
#include "Header.h"

using namespace std;
void add_arr(int size, int* arr) {
	for (int k = 0; k < size; k++) {
		arr[k] = k + 1;
	}
}

void add_arr(int size, double* arr) {
	for (int k = 0; k < size; k++) {
		arr[k] = k + 0.1;
	}
};

void add_arr(int size, char* arr) {
	for (int k = 0; k < size; k++) {
		arr[k] = k + 'a';
	}
}

int kumax(int size, int arr[]) {
	int max = arr[0];
	for (int k = 0; k <= (size - 1); k += 4) {
		if (max < arr[k]) {
			max = arr[k];
		}
	}
	return max;
}

double kumax(int size, double arr[]) {
	double max = arr[0];
	for (int k = 0; k <= (size - 1); k += 4) {
		if (max < arr[k]) {
			max = arr[k];
		}
	}
	return max;
}

char kumax(int size, char arr[]) {
	char max = arr[0];
	for (int k = 0; k <= (size - 1); k += 4) {
		if (max < arr[k]) {
			max = arr[k];
		}
	}
	return max;
}

int kumin(int size, int arr[]) {
	int min = arr[0];
	for (int k = 0; k <= (size - 1); k += 4) {
		if (min > arr[k]) {
			min = arr[k];
		}
	}
	return min;
}

double kumin(int size, double arr[]) {
	double min = arr[0];
	for (int k = 0; k <= (size - 1); k += 4) {
		if (min > arr[k]) {
			min = arr[k];
		}
	}
	return min;
}

char kumin(int size, char arr[]) {
	char min = arr[0];
	for (char k = 0; k <= (size - 1); k += 4) {
		if (min > arr[k]) {
			min = arr[k];
		}
	}
	return min;
}

void show_arr(int size, int* arr) {
	for (int x = 0; x < size; x++) {
		for (int i = 0; i < (size / 3); i++) {
			for (int l = 0; l < (size / 3); l++) {
				cout << arr[x] << " ";
				i++;
				x++;
			}
			x--;
			cout << endl;
		}
	}
}

void show_arr(int size, double* arr) {
	for (int x = 0; x < size; x++) {
		for (int i = 0; i < (size / 3); i++) {
			for (int l = 0; l < (size / 3); l++) {
				cout << arr[x] << " ";
				i++;
				x++;
			}
			x--;
			cout << endl;
		}
	}
}

void show_arr(int size, char* arr) {
	for (int x = 0; x < size; x++) {
		for (int i = 0; i < (size / 3); i++) {
			for (int l = 0; l < (size / 3); l++) {
				cout << arr[x] << " ";
				i++;
				x++;
			}
			x--;
			cout << endl;
		}
	}
}

void task_1() {
	int const size = 10;
	int arr[size]{};
	add_arr(size, arr);
	show_arr(size, arr);
	cout << endl << "Минимальный элемент"
		 << "на главной диагонали матрицы : " << kumin(size, arr) << endl;
	cout << "Максимальный элемент"
		 << "на главной диагонали матрицы : " << kumax(size, arr) << endl;
}


int main() {
	setlocale(LC_ALL, "RU");
	task_1();
    return 0;
}
