#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout <<"������� ����� ����� ������ ������? ";
	int bread = 34; //���� ����� �����, � ������
	int kolvo1; //���������� ����� �����
	std::cin >> kolvo1;
	int pricebread = bread * kolvo1; //���� ����� ����� �����, � ������
	std::cout << "������� ������ ������ ������? ";
	int candy = 87; //���� ����� �������, � ������
	int kolvo2; //���������� ������
	std::cin >> kolvo2;
	int candyprice = candy * kolvo2; //���� ����� ������, � ������
	std::cout << "������� ������� �������� ������ ������? ";
	int lemonade = 69; //���� ������� ��������, � ������
	int kolvo3; //���������� �������
	std::cin >> kolvo3;
	int lemonadeprice = lemonade * kolvo3; //���� ����� ������� ��������, � ������
	int price = pricebread + candyprice + lemonadeprice;
	std::cout << "\n\t   \"�������\" \n";
	std::cout << "       ���������� 17, � \n";
	std::cout << "-----------------------------  \n";
	std::cout << "1. ���� - ";
	std::cout << bread; 
	std::cout << " �. � ";
	std::cout << kolvo1;
	std::cout <<" = ";
	std::cout << pricebread;
	std::cout << "�. \n";
	std::cout << "2. ������� - ";
	std::cout << candy;
	std::cout << " �. � ";
	std::cout << kolvo2;
	std::cout << " = ";
	std::cout << candyprice;
	std::cout << "�. \n";
	std::cout << "3. ������� - ";
	std::cout << lemonade;
	std::cout << " �. � ";
	std::cout << kolvo3;
	std::cout << " = ";
	std::cout << lemonadeprice;
	std::cout << "�. \n";
	std::cout << "----------------------------- \n";
	std::cout << "�����:                   ";
	std::cout << price;
	std::cout << "�. \n";
	 return 0;
}