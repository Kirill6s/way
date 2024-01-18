#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

void task_1() {
	srand(time(NULL));
	int max, min;
	int array[5]{};
	for (int k = 0; k < 5; k++) {
		array[k] = rand();
		cout << array[k] << " ";
	}
	cout << endl;

	max = array[0];
	for (int k = 0; k < 5; k++) {
		if (max < array[k]) {
			max = array[k];
		}
	}
	cout << "������������ ������� �������: " << max << endl;

	min = array[0];
	for (int k = 0; k < 5; k++) {
		if (array[k] < min) {
			min = array[k];
		}
	}
	cout <<"����������� ������� �������: " << min << endl;;
}

void task_2() {
	int summa = 0;
	int z = 58;
	srand(time(0));
	int array[5]{};
	for (int k = 0; k < 5; k++) {
		array[k] = rand() % (100 - 10 + 1) + 10;

	}
	cout << array[0] << " " << array[1] << " " 
			<< array[2] << " " << array[3] << " " << array[4] << " " << endl;

	for (int k = 0; k < 5; k++) {
		if (array[k] < z) {
			summa += array[k];
		}
	}
	cout << "C���� ��������� �������� ������� ������ " << z << " �����: " << summa << endl;
}

void task_3() {
	int z, max, min, pribil, a, b; //pribil - ����� �� ������ 100
	cout << "������� ������� ����� �� ���: ";
	cin >> pribil;
	srand(time(NULL));
	int array[13]{0}; // q - 13, ��� ��� ������ ���������� � 1-�� � �� �� ������ � ��������
	while (true){
		int summa = 0;
		for (int i = 1; i < 13; i++) {
			array[i] = rand() % 20;
			summa += array[i];
		}
		if (summa == pribil) {
			break;
			
		}
	}

	for (int i = 0; i < 13; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	cout << "������� �������� �������: ";
	cin >> a >> b;
	int c = a, d = b;

	max = array[a];
	for (a; a <= b; a++) {
		if (max <= array[a]) {
			max = array[a];
			z = a;
		}
	} 

	switch (z) {
	case 1:cout << "�����, � ������� ������� ���� �����������: ������, " << max << endl; break;
	case 2:cout << "�����, � ������� ������� ���� �����������: �������, " << max << endl; break;
	case 3:cout << "�����, � ������� ������� ���� �����������: ����, " << max << endl; break;
	case 4:cout << "�����, � ������� ������� ���� �����������: ������, " << max << endl; break;
	case 5:cout << "�����, � ������� ������� ���� �����������: ���, " << max << endl; break;
	case 6:cout << "�����, � ������� ������� ���� �����������: ����, " << max << endl; break;
	case 7:cout << "�����, � ������� ������� ���� �����������: ����, " << max << endl; break;
	case 8:cout << "�����, � ������� ������� ���� �����������: ������, " << max << endl; break;
	case 9:cout << "�����, � ������� ������� ���� �����������: ��������, " << max << endl; break;
	case 10:cout << "�����, � ������� ������� ���� �����������: �������, " << max << endl; break;
	case 11:cout << "�����, � ������� ������� ���� �����������: ������, " << max << endl; break;
	case 12:cout << "�����, � ������� ������� ���� �����������: �������, " << max << endl; break;
	}

	min = array[c];
	for (c; c <= d; c++) {
		if (min >= array[c]) {
			min = array[c];
			z = c;
		}
	}

	switch (z) {
	case 1:cout << "�����, � ������� ������� ���� ����������: ������, " << min; break;
	case 2:cout << "�����, � ������� ������� ���� ����������: �������, " << min; break;
	case 3:cout << "�����, � ������� ������� ���� ����������: ����, " << min;  break;
	case 4:cout << "�����, � ������� ������� ���� ����������: ������, " << min; break;
	case 5:cout << "�����, � ������� ������� ���� ����������: ���, " << min; break;
	case 6:cout << "�����, � ������� ������� ���� ����������: ����, " << min; break;
	case 7:cout << "�����, � ������� ������� ���� ����������: ����, " << min; break;
	case 8:cout << "�����, � ������� ������� ���� ����������: ������, " << min; break;
	case 9:cout << "�����, � ������� ������� ���� ����������: ��������, " << min; break;
	case 10:cout << "�����, � ������� ������� ���� ����������: �������, " << min; break;
	case 11:cout << "�����, � ������� ������� ���� ����������: ������, " << min; break;
	case 12:cout << "�����, � ������� ������� ���� ����������: �������, " << min; break;
	}
	cout << endl;
}

void task_4() {
	srand(time(NULL));
	int max, min, z, s;
	double long proiz = 1;
	int summa = 0;
	int const N = 5;
	double array[N]{};
	for (int k = 0; k < N; k++) {
		array[k] = double(rand()) / (rand() % (10 - (-10) + 1) + (-10));
		cout << array[k] << " ";
	}

	cout << endl;

	for (int a = 0; a < N; a++) {
		if (array[a] < 0) {
			summa += array[a];
		}
	}
	cout << "����� ������������� ���������: " << summa << endl;

	

	for (int b = 0; b < N; b++) {
		if (b % 2 == 0) {
			proiz *= array[b];
		}

	}
	cout << "������������ ��������� � ������� ���������: " << proiz << endl;





}

int main() {
	setlocale(LC_ALL, "RU");
	task_3();
	return 0;
}