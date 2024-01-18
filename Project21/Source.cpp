#include <iostream>

using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void add_arr(int size, int* arr) {
	for (int k = 0; k < size; k++) {
	 arr[k] = k+1;
	}
}

void show_arr(int size, int* arr) {
	for (int k = 0; k < size; k++) {
		cout << arr[k] << " ";
	}
	cout << endl;
}

void task_1() {
	int x = 1, y = 5;
	int* px = &x;
	int* py = &y;
	swap(x, y);
	cout << x << y << endl;
	int const size = 10;
	int arr[size]{};
	add_arr(size, arr);

	for (int i = 0; i < size; i+=2) {
		swap((arr[i]), (arr[i+1]));
	}
	show_arr(size, arr);
}

void task_2_1() {
	int const size = 5;
	int const zise = 6;
	int arr_1[size]{ 1,3,5,7,9 };
	int arr_2[zise]{ 2,4,6,8,10,12 };
	int arr_3[size + zise]{};
	int* pArr_1 = arr_1;
	int* pArr_2 = arr_2;
	int* pArr_3 = arr_3;
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++) {
			*(pArr_3 + i) = *(pArr_1 + k); 
			*(pArr_3 + (i+5)) = *(pArr_2 + k); 
			i++;
		} 
		*(pArr_3 + 5) = *(pArr_2);
	}	
	
for (int i = 0; i < (size + zise); i++) {
	for (int i = 0; i < ((size + zise)-1); i++){
		if (arr_3[i] > arr_3[i + 1]) {
				swap(arr_3[i], arr_3[i + 1]);
		}
	}
}
	show_arr((size + zise), arr_3);
	cout << endl;
}

void task_2_2() {
	int const size = 5;
	int const zise = 6;
	int arr_1[size]{ 1,3,5,7,9 };
	int arr_2[zise]{ 2,4,6,8,10,12 };
	int arr_3[size + zise]{};
	int* pArr_1 = arr_1;
	int* pArr_2 = arr_2;
	int* pArr_3 = arr_3;
	for (int i = 0; i < 1; i++) {
		for (int k = 0; k < 5; k++) {
			*(pArr_3 + i) = *(pArr_1 + k);
			i++;
		}
	}
	for (int i = 5; i < 6; i++) {
		for (int k = 0; k < 6; k++) {

			*(pArr_3 + i) = *(pArr_2 + k);
			i++;
		}
	}
	for (int i = 0; i < (size + zise); i++) {
		for (int i = 0; i < ((size + zise) - 1); i++)
		{
			if (arr_3[i] > arr_3[i + 1]) {
				swap(arr_3[i], arr_3[i + 1]);
			}
		}
	}
	show_arr((size + zise), arr_3);
	cout << endl;
}

int main() {
	task_1();
	//task_2_1();
	// 	task_2_2();
	return 0;
}