#include <iostream>

using namespace std;
bool function_1(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int function_2(int array[]) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (function_1(array[i])) {
            count++; 
        }
    }
    return count;
}

void task_1() {
    int array[5] = { 3, 10, 10, 10, 10 };
    int size = sizeof(array) / sizeof(array[0]);
    int prime_count = function_2(array);
    cout << "Количество простых чисел: " << prime_count << endl;
}


int main() {
	setlocale(LC_ALL, "RU");
	task_1();
	return 0;
}