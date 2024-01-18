#include <iostream>
using namespace std;

int main(){
	system("pause");
	srand(time(NULL));
	int e = 0;
	while (e < 5) {
		e++;
		int max = 6;
		int min = 1;
		int cube1 = rand() % (max - min + 1) + min;
		int cube2 = rand() % (max - min + 1) + min;
		cout << cube1 << " " << cube2 << "\n";
	}
	return 0;
}

