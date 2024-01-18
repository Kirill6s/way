#include <iostream>
#include "C:\Users\User\source\repos\Функции и шаблоны.h"

using namespace std;

template <typename T>
void sort(int size, T arr) {
	int i = 0;
	for (i = 0; i < ((size / 2) ); i++) {
		if (arr[i] < arr[i + 1] && arr[i != size]) {
			my_swap(arr[i], arr[i + 1]);
		}
	}
	for (int k = i + 6; k <= size; k++) {
		if (arr[k] > arr[k + 1]) {
			my_swap(arr[k], arr[k + 1]);
		}
	}

}

void task_1() {
	const int size = 10;
	int arr[size]{};
	get_rand_arr(size, arr);
	show_arr(size, arr);
	sort(size, arr);
	show_arr(size, arr);
}

int main() {
	task_1();

	return 0;
}