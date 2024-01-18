#include <iostream>

void soprotivlenie() {
	double R1, R2, R3;
	std::cout << "R1 = ";
	std::cin >> R1;
	std::cout << "R2 = ";
	std::cin >> R2;
	std::cout << "R3 = ";
	std::cin >> R3;
	double R = 1 / R1 + 1 / R2 + 1 / R3;
	std::cout << "R = ";
	std::cout << R;
}

void okrujnost () {
	std::cout << "L = ";
	const double pi = 3.14;
	double L;
	std::cin >> L;
	double R = L / (2 * pi);
	double S = pi * pow(R,2);
	std::cout << "S = ";
	std::cout << S;
	
}

void d() {
	double v;
	std::cout << "v = ";
	std::cin >> v; //  ì/ñ;

	std::cout << "t = ";
	double t;
	std::cin >> t; // ñ

	std::cout << "a = ";
	double a;
	std::cin >> a;  // ì/c

	double	S = v * t + (a * pow(t, 2))/2 ;
	std::cout << "S = ";
	std::cout << S;
	std::cout << " ì";

}

int main() {
	setlocale(LC_ALL, "Ru");

//	soprotivlenie();
//	okrujnost();
//	d();
	return 0;



}