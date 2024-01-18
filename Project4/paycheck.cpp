#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout <<"Сколько булок хлеба хочешь купить? ";
	int bread = 34; //Цена одной булки, в рублях
	int kolvo1; //Количество булок хлеба
	std::cin >> kolvo1;
	int pricebread = bread * kolvo1; //Цена суммы булок хлеба, в рублях
	std::cout << "Сколько конфет хочешь купить? ";
	int candy = 87; //Цена одной конфеты, в рублях
	int kolvo2; //Количество конфет
	std::cin >> kolvo2;
	int candyprice = candy * kolvo2; //Цена суммы конфет, в рублях
	std::cout << "Сколько бутылок лимонада хочешь купить? ";
	int lemonade = 69; //Цена бутылки лимонада, в рублях
	int kolvo3; //Количество бутылок
	std::cin >> kolvo3;
	int lemonadeprice = lemonade * kolvo3; //Цена суммы бутылок лимонада, в рублях
	int price = pricebread + candyprice + lemonadeprice;
	std::cout << "\n\t   \"Магазин\" \n";
	std::cout << "       Извилистая 17, Б \n";
	std::cout << "-----------------------------  \n";
	std::cout << "1. Хлеб - ";
	std::cout << bread; 
	std::cout << " р. х ";
	std::cout << kolvo1;
	std::cout <<" = ";
	std::cout << pricebread;
	std::cout << "р. \n";
	std::cout << "2. Конфета - ";
	std::cout << candy;
	std::cout << " р. х ";
	std::cout << kolvo2;
	std::cout << " = ";
	std::cout << candyprice;
	std::cout << "р. \n";
	std::cout << "3. Лимонад - ";
	std::cout << lemonade;
	std::cout << " р. х ";
	std::cout << kolvo3;
	std::cout << " = ";
	std::cout << lemonadeprice;
	std::cout << "р. \n";
	std::cout << "----------------------------- \n";
	std::cout << "Итого:                   ";
	std::cout << price;
	std::cout << "р. \n";
	 return 0;
}