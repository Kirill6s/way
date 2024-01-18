#include <iostream>
using namespace std;

void task_1() {
    int a, z, x;
    int	sum = 0;
    int d = 0;
    double n = 0;
    cout << "Введите число: ";
    cin >> a;
    cout << "\n";


    while (0 < a) {
        x = a % 10;
        if (x == 0) {
            d++;
        };
        z = a / 10;
        n++;
        sum += x;
        a = z;
    }

    char ch;
    cout << "Чтоб узнать количество цифр в этом числе нажмите - z\n";
    cout << "Чтоб узнать cумму цифр нажмите - x\n";
    cout << "Чтоб узнать cреднее арифметическое цифр нажмите - c\n";
    cout << "Чтоб узнать количество нулей нажмите - v\n";
    cin >> ch;
    cout << "\n";

    switch (ch) {
    case 'z': cout << "Количество цифр в этом числе: " << n << endl; break;
    case 'x': cout << "Сумма цифр в этом числе: " << sum << endl; break;
    case 'c': cout << "Cреднее арифметическое цифр в этом числе: " << sum / n << endl; break;
    case 'v': cout << "Количество нулей в этом числе: " << d << endl; break;
    default: cout << "Не корректный ввод ";
    }
}

void task_2() {
    int d = 8; char bukva;
    for (int i = 0; i < 8; i++) {

        for (int b = 0; b < 8; b++) {
            bukva = b + 97;
            cout << bukva << d << " ";

        }

        d--;
        cout << endl;

    }
}

void task_3() {
    const int blueberry_muffin = 210;
    int kolvo1;

    const int raspberry_muffin = 170;
    int kolvo2;

    const int grape_muffin = 170;
    int kolvo3;

    const int coffee = 130;
    int kolvo4;

    const int tea = 300;
    int kolvo5;

    const int morse = 190;
    int kolvo6;

    double final_summa = 0;
    double cheque;
    double preliminary_summa = 0;
    char ch;
    int guest;

    cout << "На сколько человек заказ? ";
    cin >> guest;
    for (int d = 0; d < guest; d++) {
        kolvo1 = 0;
        kolvo2 = 0;
        kolvo3 = 0;
        kolvo4 = 0;
        kolvo5 = 0;
        kolvo6 = 0;
        cheque = 0;
        cout << "Что желаете заказать? ( b - черничный кекс,\n\t\t\tr - малиновый кекс,\n"
            << "\t\t\tg - виноградный кекс,\n\t\t\tc - чашка кофе,\n\t\t\tt - чашка чая,\n\t\t\tm - чашка морса )" << endl;
        cin >> ch;
        switch (ch) {
        case 'b':cout << "Сколько желаете черничных кексов? ";
            cin >> kolvo1; break;
        case 'r':cout << "Сколько желаете малиновых кексов? ";
            cin >> kolvo2; break;
        case 'g':cout << "Сколько желаете виноградных кексов? ";
            cin >> kolvo3; break;
        case 'c':cout << "Сколько желаете чашек кофе? ";
            cin >> kolvo4; break;
        case 't':cout << "Сколько желаете чашек чая? ";
            cin >> kolvo5; break;
        case 'm':cout << "Сколько желаете чашек морса? ";
            cin >> kolvo6; break;
        default: cout << "Данного блюда не найдено в меню " << endl;
        }
        cheque = (blueberry_muffin * kolvo1) + (raspberry_muffin * kolvo2) +
            (grape_muffin * kolvo3) + (coffee * kolvo4) + (tea * kolvo5) + (morse * kolvo6);
        preliminary_summa += cheque;
    }

    for (int d = 0; d < guest; d++) {
        kolvo1 = 0;
        kolvo2 = 0;
        kolvo3 = 0;
        kolvo4 = 0;
        kolvo5 = 0;
        kolvo6 = 0;
        cheque = 0;
        cout << "Желаете что-то добавить? ";
        cin >> ch;
        if (ch == 'Y' || ch == 'y') {
            cout << "Что желаете добавить? ( b - черничный кекс,\n\t\t\tr - малиновый кекс,\n"
                << "\t\t\tg - виноградный кекс,\n\t\t\tc - чашка кофе,\n\t\t\tt - чашка чая,\n\t\t\tm - чашка морса )" << endl;
            cin >> ch;
            switch (ch) {
            case 'b': cout << "Сколько желаете добавить черничных кексов? ";
                cin >> kolvo1; break;
            case 'r': cout << "Сколько желаете добавить малиновых кексов? ";
                cin >> kolvo2; break;
            case 'g': cout << "Сколько желаете добавить виноградных кексов? ";
                cin >> kolvo3; break;
            case 'c': cout << "Сколько желаете добавить чашек кофе? ";
                cin >> kolvo4; break;
            case 't': cout << "Сколько желаете добавить чашек чая? ";
                cin >> kolvo5; break;
            case 'm': cout << "Сколько желаете добавить чашек морса? ";
                cin >> kolvo6; break;
            default: cout << "Данного блюда не найдено в меню " << endl;
            }
            cheque = (blueberry_muffin * kolvo1) + (raspberry_muffin * kolvo2) +
                (grape_muffin * kolvo3) + (coffee * kolvo4) + (tea * kolvo5) + (morse * kolvo6);
            preliminary_summa += cheque;
        }
    }
    final_summa += preliminary_summa;
    cout << "Итоговая сумма общего заказа всей компании: " << final_summa << " рублей" << endl;
}

void task_4() {
    int d = 0; char bukva;
    for (int i = 0; i < 10; i++) {

        for (int b = 0; b < 10; b++) {
            bukva = b + 65;
            cout << bukva << d << " ";

        }

        d++;
        cout << endl;

    }
}


int main() {
	setlocale(LC_ALL, "RU");
	task_1();
    system("pause");
	return 0;
}