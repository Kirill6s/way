#include <iostream>

using namespace std;

void task_1() {
	int summ = 0;
	int array[3][4]{0,1,2,3,0,1,2,3,0,1,2,3};
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			if (array[i][k] == 0) {
				summ++;
			}
		}
	}
	cout << "���������� ��������� �������� ������� ����� ����: " << summ;
}

void task_2() {
	int max, max1, max2, max3, max4, max5;
	int array[3][3]{0,1,2,3,4,5,6,7,8};
	max = array[0][0];
	max1 = array[1][0];
	max2 = array[2][0];
	max3 = max;
	max4 = array[0][1];
	max5 = array[0][2];
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			cout << array[i][k] << " ";
			for (int z = 0; z < 3; z++) {
				if (max < array[0][k]||max1 < array[1][k]||max2 < array[2][k]) {
					max = array[0][k];
					max1 = array[1][k];
					max2 = array[2][k];
				}
			}
			for (int z = 0; z < 3; z++) {
				if (max3 < array[i][0]||max4 < array[i][1]||max3 < array[i][2]) {
					max3 = array[i][0]; 
					max4 = array[i][1];
					max5 = array[i][2];
				}
			}
		}
	cout << endl;
	}
	cout << endl;
	cout << "���������� �� �������� ��������� � ������� 1-��: " << max << endl;
	cout << "���������� �� �������� ��������� � ������� 2-��: " << max1 << endl;
	cout << "���������� �� �������� ��������� � ������� 3-��: " << max2 << endl;
	cout << "���������� �� �������� ��������� � �������� 1-��: " << max3 << endl;
	cout << "���������� �� �������� ��������� � �������� 2-��: " << max4 << endl;
	cout << "���������� �� �������� ��������� � �������� 3-��: " << max5 << endl;
}

int main() {
	setlocale(LC_ALL, "RU");
	task_2();
	return 0;
}