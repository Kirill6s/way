#include <iostream>

using namespace std;

void task_1() {
	int max;
	cout << "������� ����� ������ ������������� ����� ������: ";
	int ar[5]{};
	int summa = 0;
	for (int i = 0; i < 5; i++) {
		cin >> ar[i];
		summa += ar[i];
	}
	
	max = ar[0];
	for (int i = 0; i < 5; i++) {
		if (max <= ar[i]) {
			max = ar[i];
		}
	}	

	cout << "����� ���� ������ �������������: " << summa << endl;
	cout << "������������ ������� �������������: " << max << endl;

}

void task_2() {
	int z, max, min, pribil, a, b; //pribil - ����� �� ������ 100
	cout << "������� ������� ����� �� ���: ";
	cin >> pribil;
	srand(time(NULL));
	int array[13]{ 0 }; // q - 13, ��� ��� ������ ���������� � 1-�� � �� �� ������ � ��������
	while (true) {
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

int main() {
	setlocale(LC_ALL, "RU");
	task_1();
	return 0;

}