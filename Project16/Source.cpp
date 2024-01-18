#include <iostream>

using namespace std;

void task_1() {
	int max;
	cout << "¬ведите длины сторон п€тиугольника через пробел: ";
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

	cout << "—умма длин сторон п€тиугольника: " << summa << endl;
	cout << "ћаксимальна€ сторона п€тиугольника: " << max << endl;

}

void task_2() {
	int z, max, min, pribil, a, b; //pribil - лучше не больше 100
	cout << "¬ведите прибыль фирмы за год: ";
	cin >> pribil;
	srand(time(NULL));
	int array[13]{ 0 }; // q - 13, так как мес€цы нумеруютс€ с 1-го и он не входит в диапазон
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

int main() {
	setlocale(LC_ALL, "RU");
	task_1();
	return 0;

}