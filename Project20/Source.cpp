#include <iostream>

using namespace std;

void task_1() {
	const int size = 5;
	int arr_1[size]{ 1, 2, 3, 4, 5 };
	int arr_2[size]{};
	int* pArr_1 = arr_1;
	int* pArr_2 = arr_2;
	for (int i = 0; i < size; i++) {
		*(pArr_2 + i) = *(pArr_1 + i);
		cout << arr_2[i] << " ";
	}
	cout << endl;
}

void task_2() {
	const int size = 5;
	int arr_1[size]{ 1, 2, 3, 4, 5 };
	int* pArr_1 = arr_1;
	for (int i = 4; i >= 0; i--) {
		cout << *(pArr_1 + i) << " ";
	}
	cout << endl;
}

void task_3() {
	const int size = 5;
	int arr_1[size]{ 1, 2, 3, 4, 5 };
	int arr_2[size]{};
	int* pArr_1 = arr_1;
	int* pArr_2 = arr_2;
	for (int i = 0; i < size; i++) {
		int k = 4;
		*(pArr_2 + i) = *(pArr_1 + k);
		k--;
		cout << arr_2[i] << " ";
	}
	cout << endl;
}

int main() {
	//task_1();
	//task_2();
	task_3();
	return 0;
}