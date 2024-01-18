#include <iostream>
#include <cmath>

using namespace std;

// Функция для проверки, находится ли точка (x, y) внутри кольца
bool isInsideRing(double x, double y, double r1, double r2) {
    double distance = sqrt(pow(x, 2) + pow(y, 2));
    return (distance > r1) && (distance < r2);
}

int main(double r1, double r2) {
    setlocale(LC_ALL, "ru");

    cout << "Введите координаты (x,y): ";
    double x, y;
    cin >> x >> y;

    if (isInsideRing(x, y, r1, r2)) {
        cout << "Точка находится внутри кольца." << endl;
    }
    else {
        cout << "Точка не находится внутри кольца." << endl;
    }

    system("pause");  // Ждем нажатия Enter перед завершением программы
    return 0;
}
