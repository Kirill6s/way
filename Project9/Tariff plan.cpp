#include <iostream>
using namespace std;

void tariff_plan() {
    cout << "¬ведите мес€чную стоимость тарифного плана: ";
    int n;
    cin >> n;

    enum {
        Internet = 500,
        MegaTerif = 600,
        Maximum = 750,
        VIP = 1000,
        Premium = 2000
    };

    switch (n) {
    case 'I': cout << "Cумма полугодовогой стоимости выбранного тарифа = " << Internet * 6 << " рублей"; break;
    case MegaTerif: cout << "Cумма полугодовогой стоимости выбранного тарифа = " << n * 6 << " рублей"; break;
    case Maximum: cout << "Cумма полугодовогой стоимости выбранного тарифа = " << n * 6 << " рублей"; break;
    case VIP: cout << "Cумма полугодовогой стоимости выбранного тарифа = " << n * 6 << " рублей"; break;
    case Premium: cout << "Cумма полугодовогой стоимости выбранного тарифа = " << n * 6 << " рублей"; break;
    default: cout << "“арифный план с введЄнной мес€чной стоимостью отсутствует.";
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    tariff_plan();
    return 0;
}