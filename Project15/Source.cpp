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
	cout << "ћаксимальный элемент массива: " << max << endl;

	min = array[0];
	for (int k = 0; k < 5; k++) {
		if (array[k] < min) {
			min = array[k];
		}
	}
	cout <<"ћинимальный элемент массива: " << min << endl;;
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
	cout << "Cумма элементов значени€ которых меньше " << z << " равна: " << summa << endl;
}

void task_3() {
	int z, max, min, pribil, a, b; //pribil - лучше не больше 100
	cout << "¬ведите прибыль фирмы за год: ";
	cin >> pribil;
	srand(time(NULL));
	int array[13]{0}; // q - 13, так как мес€цы нумеруютс€ с 1-го и он не входит в диапазон
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

	cout << "¬ведите диапазон мес€цев: ";
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
	case 1:cout << "ћес€ц, в котором прибыль была максимальна: январь, " << max << endl; break;
	case 2:cout << "ћес€ц, в котором прибыль была максимальна: ‘евраль, " << max << endl; break;
	case 3:cout << "ћес€ц, в котором прибыль была максимальна: ћарт, " << max << endl; break;
	case 4:cout << "ћес€ц, в котором прибыль была максимальна: јпрель, " << max << endl; break;
	case 5:cout << "ћес€ц, в котором прибыль была максимальна: ћай, " << max << endl; break;
	case 6:cout << "ћес€ц, в котором прибыль была максимальна: »юнь, " << max << endl; break;
	case 7:cout << "ћес€ц, в котором прибыль была максимальна: »юль, " << max << endl; break;
	case 8:cout << "ћес€ц, в котором прибыль была максимальна: јвгуст, " << max << endl; break;
	case 9:cout << "ћес€ц, в котором прибыль была максимальна: —ент€брь, " << max << endl; break;
	case 10:cout << "ћес€ц, в котором прибыль была максимальна: ќкт€брь, " << max << endl; break;
	case 11:cout << "ћес€ц, в котором прибыль была максимальна: Ќо€брь, " << max << endl; break;
	case 12:cout << "ћес€ц, в котором прибыль была максимальна: ƒекабрь, " << max << endl; break;
	}

	min = array[c];
	for (c; c <= d; c++) {
		if (min >= array[c]) {
			min = array[c];
			z = c;
		}
	}

	switch (z) {
	case 1:cout << "ћес€ц, в котором прибыль была минимальна: январь, " << min; break;
	case 2:cout << "ћес€ц, в котором прибыль была минимальна: ‘евраль, " << min; break;
	case 3:cout << "ћес€ц, в котором прибыль была минимальна: ћарт, " << min;  break;
	case 4:cout << "ћес€ц, в котором прибыль была минимальна: јпрель, " << min; break;
	case 5:cout << "ћес€ц, в котором прибыль была минимальна: ћай, " << min; break;
	case 6:cout << "ћес€ц, в котором прибыль была минимальна: »юнь, " << min; break;
	case 7:cout << "ћес€ц, в котором прибыль была минимальна: »юль, " << min; break;
	case 8:cout << "ћес€ц, в котором прибыль была минимальна: јвгуст, " << min; break;
	case 9:cout << "ћес€ц, в котором прибыль была минимальна: —ент€брь, " << min; break;
	case 10:cout << "ћес€ц, в котором прибыль была минимальна: ќкт€брь, " << min; break;
	case 11:cout << "ћес€ц, в котором прибыль была минимальна: Ќо€брь, " << min; break;
	case 12:cout << "ћес€ц, в котором прибыль была минимальна: ƒекабрь, " << min; break;
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
	cout << "—умму отрицательных элементов: " << summa << endl;

	

	for (int b = 0; b < N; b++) {
		if (b % 2 == 0) {
			proiz *= array[b];
		}

	}
	cout << "ѕроизведение элементов с чЄтными индексами: " << proiz << endl;





}

int main() {
	setlocale(LC_ALL, "RU");
	task_3();
	return 0;
}