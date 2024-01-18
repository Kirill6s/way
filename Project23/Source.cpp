#include <iostream>;
#include "Header.h"

using namespace std;

void task() {
	int arr1[]{1,2,3,4,6,7,8,};
	int arr2[]{4,6};
	int arr3[]{4,5};
	
	cout << find(size(arr1), arr1, size(arr2), arr2) << endl;
	cout << find(size(arr1), arr1, size(arr3), arr3) << endl;

}

int main() {
	task();
	return 0;
}

