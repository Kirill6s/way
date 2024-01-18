#include <iostream>
#include "Header.h"

using namespace std;

void task_1() {
	int arr[]{0, 39, 7, -45, 8, 0, 45, -48, 0, -21, 43, 40, 3, 0 };
	int size = -1;
	int* pos_arr = new int[size];
	show_arr(sizeof(arr), arr);
	positiv_numbers(sizeof(arr), arr, size, pos_arr);
	
}


int main() {
	task_1();
	return 0;
}