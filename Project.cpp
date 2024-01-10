
#include <iostream>

#include <string>

#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string divider = "******";

    int snack, side, hot, desert, exit, choice, drink, drinkNum = 0, snackNum = 0, sideNum = 0, hotNum = 0, desertNum = 0,
        carpL = 0, carpT = 0, tigr = 0, cheese = 0, i;
    int snackPrice = 15;


    double    sidePrice = 4.99, hotPrice = 11.99, drinkPrice = 1.85, desertPrice = 2.54, salesTax = 0.06, total;

    cout << divider;
    cout << "\n\nMenu"

        << "\n\n1) Холодные закуски"

        << "\n2) Первые блюда"

        << "\n3) Горячие блюда"

        << "\n4) Десерты"

        << "\n5) Напитки"

        << "\n6) Отказ от меню";

    cout << "\n\nВаш выбор (1-6)? ";

    cin >> choice;

    cout << "\n";

    cout << divider;

    do {

        switch (choice) {

        case 1:

            int  carpL, carpT, tigr, cheese, snackChoice; ;

            cout << "\n\n1) Карпаччо из лосося"

                << "\n2) Карпаччо из телятины"

                << "\n3) Тартар из тигровых креветок"

                << "\n4) Сырное плато";

            cout << "\n\nКакую преподчтёте закуску? ";

            cin >> snackChoice;

            switch (snackChoice) {

            case 1:

                cout << "\nСколько порций карпаччо из лосося вы желаете? ";

                cin >> snackNum;




                cout << "\n" << divider;

                break;

            case 2:

                cout << "\nСколько порций карпаччо из телятины вы желаете? ";

                cin >> snackNum;


                cout << "\n" << divider;

                break;

            case 3:

                cout << "\nСколько порций тартара из тигровых криветок вы желаете? ";

                cin >> snackNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\nСколько порций сырного плато вы желаете?";

                cin >> snackNum;

                cout << "\n" << divider;

                break;

            default:

                cout << snackNum << " Недопустимый символ!";

                int carpachoL, carpachoC, tartar, cheese, snackChoice;

                cout << "\n\n1) Карпаччо из лосося"

                    << "\n2) Карпаччо из телятины"

                    << "\n3) Тартар из тигровых креветок"

                    << "\n4) Сырное плато";

                cout << "\n\n Сделайте выбор ";

                cin >> snackChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"
                << "\n\n Menu"

                << "\n\n1) Холодные закуски"

                << "\n2) Первые блюда"

                << "\n3) Горячие блюда"
                << "\n4) Десерты"

                << "\n5) Напитки"

                << "\n6) Отказ от меню";

            cout << "\n\nВаш выбор (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

        case 2:

            int tom, soup, tai, borshch, sideChoice;

            cout << "\n\n1) Том-ям с креветками"

                << "\n2) Суп из перепелки с итальянской лапшой"

                << "\n3) Тайский суп с курицей и креветками"

                << "\n4) Зеленый борщ из телятины";

            cout << "\n\nКакие  первые блюда вы желаете? ";

            cin >> sideChoice;

            switch (sideChoice) {

            case 1:

                cout << "\nСколько порций Том-яма с креветкаи вы желаете?";

                cin >> sideNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\nСколько порций Супа из перепелки с итальянской лапшой вы желаете? ";

                cin >> sideNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\nСколько порций тайского супа вы желаете? ";

                cin >> sideNum;
                cout << "\n" << divider;

                break;

            case 4:

                cout << "\nСколько порций зеленого борща с телятины вы желаете? ";

                cin >> sideNum;

                cout << "\n" << divider;

                break;

            default:

                cout << sideNum << " Недопустимый символ";

                int carpachoL, carpachoC, tartar, cheese, snackChoice;

                cout << "\n\n1) Том-ям с креветками"

                    << "\n2) Суп из перепелки с итальянской лапшой"

                    << "\n3) Тайский суп с курицей и креветками"

                    << "\n4) Зеленый борщ из телятины";

                cout << "\n\nКакие первые блюда вы желаете? ";

                cin >> sideChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"

                << "\n\n Menu"

                << "\n\n1) Холодные закуски"

                << "\n2) Первые блюда"

                << "\n3) Горячие блюда"

                << "\n4) Десерты"

                << "\n5) Напитки"

                << "\n6) Отказ от меню";

            cout << "\n\nВаш выбор (1-6)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

        case 3:

            int kambala, semga, ytka, telatina, hotChoice;

            cout << "\n\n1) Камбала во фритюре по-японски"

                << "\n2) Семга гриль с печеными овощами"

                << "\n3) Утка по-турецки"

                << "\n4) Телятина под соусом « Четыре сыра";

            cout << "\n\nКакие горячие блюда вы желаете? ";

            cin >> hotChoice;

            switch (hotChoice) {

            case 1:

                cout << "\nСколько порций камбалы во фритюре по -японски вы желаете? ";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\nСколько порций семги гриль с овощами вы желаете? ";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\nСколько порций утки по-пекински вы желаете";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\nСколько порций телтины под соусом четыри сыра вы желаете? ";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            default:

                cout << hotNum << " is not a valid character!";

                int kambala, semga, ytka, telatina, hotChoice;


                cout << "\n\n1) Камбала во фритюре по-японски"

                    << "\n2) Семга гриль с печеными овощами"

                    << "\n3) Утка по-турецки"

                    << "\n4) Телятина под соусом « Четыре сыра";

                cout << "\n\nКакие горячие блюда вы желаете? ";

                cin >> hotChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"

                << "\n\n Menu"

                << "\n\n1) Холодные закуски"

                << "\n2) Первые блюда"

                << "\n3) Горячие блюда"

                << "\n4) Десерты"

                << "\n5) Напитки"

                << "\n6) Отказ от меню";

            cout << "\n\nВаш выбор (1-6)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 4:

            int cheesecack, napoleon, beeze, fruits, desertChoice;

            cout << "\n\n1) Чизкейк"

                << "\n2) Торт Наполеон"

                << "\n3) Бизе с виноградом"

                << "\n4) Фрукты асорти";

            cout << "\n\n Что вы желаете? ";

            cin >> desertChoice;

            switch (desertChoice) {

            case 1:

                cout << "\nСколько порций чизкейка вы желаете? ";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\nСколько порций наполеона вы желаете? ";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\nСколько порций бизе с виноградом вы желаете? ";

                cin >> snackNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\nСколько порций фруктового асорти вы желаете?";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            default:

                cout << desertNum << " is not a valid character!";
                int cheesecack, napoleon, beeze, fruits, desertChoice;

                cout << "\n\n1) Чизкейк"

                    << "\n2) Торт Наполеон"

                    << "\n3) Бизе с виноградом"

                    << "\n4) Фрукты асорти";

                cout << "\n\n Сделайте выбор ";

                cin >> desertChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\ Menu"
                << "\n\ Menu"

                << "\n\n1) Холодные закуски"

                << "\n2) Первые блюда"

                << "\n3) Горячие блюда"

                << "\n4) Десерты"

                << "\n5) Напитки"

                << "\n6) Отказ от меню";

            cout << "\n\nВаш выбор (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;


            /////////////////////////////////////////////////////////////////////////////////////////////////////////



        case 5:

            int coca, tee, coffee, juise, drinkChoice;

            cout << "\n\n1) Кока кола"

                << "\n2) Чай чёрный байховый"

                << "\n3) Кофе "

                << "\n4) Сок в асортименте";

            cout << "\n\nЧто вы желаете? ";

            cin >> drinkChoice;

            switch (drinkChoice) {

            case 1:

                cout << "\nСколько бутылок колы вы желаете? ";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\nСколько кружек чая  вы желаете? ";

                cin >> drinkNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\nСколько кружек кофе вы желаете? ";

                cin >> drinkNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\nСколько порций фруктового асорти вы желаете?";

                cin >> drinkNum;

                cout << "\n" << divider;

                break;

            default:

                cout << drinkNum << " Недопустимый символ!";
                int cheesecack, napoleon, beeze, fruits, desertChoice;

                cout << "\n\n1) Кока кола"

                    << "\n2) Чай чёрный байховый"

                    << "\n3) Кофе "

                    << "\n4) Сок в асортименте";

                cout << "\n\n Сделайте выбор ";

                cin >> drinkChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"
                << "\n\n Menu"

                << "\n\n1) Холодные закуски"

                << "\n2) Первые блюда"

                << "\n3) Горячие блюда"

                << "\n4) Десерты"

                << "\n5) Напитки"

                << "\n6) Отказ от меню";

            cout << "\n\nВаш выбор (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

            ///////////////////////////////////////





        case 6:

            cout << "\n\nЖалко, что вы не нашли нечего для себя интересного. Возвращайтесь ещё!";

            break;

        default:

            cout << "\n\n" << choice << " Это не корректный выбор. Пожалуйста нажмите 1-5.\n\n";

            cout << divider;

            cout << "\n\ Menu"

                << "\n\ Menu"

                << "\n\n1) Холодные закуски"

                << "\n2) Первые блюда"
                 
                << "\n3) Горячие блюда"

                << "\n4) Десерты"

                << "\n5) Напитки"

                << "\n6) Отказ от меню";

            cout << "\n\nВаш выбор (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;
        }




    } while (choice != 6);

    if (choice == 6) {

        cout << "\n\nОПИСАНИЕ ЗАКАЗА\n";

        if (snackNum != 1) {

            cout << "\n" << snackNum << "закусок";

        }

        else {

            cout << "\n" << snackNum << " закуска";

        }

        if (sideNum != 1) {

            cout << "\n" << sideNum << " первое блюдо";

        }



        else if(sideNum == 0|| sideNum > 1){

            cout << "\n" << sideNum << " первых блюд";

        }

        if (hotNum != 1) {

            cout << "\n" << hotNum << " горячее блюдо";

        }

        else {

            cout << "\n" << hotNum << " горячие блюда";

        }

        if (desertNum != 1) {
            cout << "\n" << desertNum << " десерт";
        }
        else {

            cout << "\n" << desertNum << " десерта";
        }

        if (drinkNum != 1) {
            cout << "\n" << drinkNum << " напиток\n\n";
        }
        else {

            cout << "\n" << drinkNum << " напитка\n\n";
        }
        cout << "ОПИСАНИЕ ЗАКАЗА";

        snackPrice = snackPrice * snackNum;

        sidePrice = sidePrice * sideNum;

        hotPrice = hotPrice * hotNum;

        desertPrice = desertPrice * desertNum;

        drinkPrice = drinkPrice * drinkNum;

        total = (snackPrice + sidePrice + hotPrice + desertPrice + drinkNum);

        salesTax = total * salesTax;

        cout << "\n\nЦена блюд без НДС: р." << setprecision(2) << fixed << total;

        total = total + salesTax;

        cout << "\nНДС: р." << setprecision(2) << fixed << salesTax;

        if (total > 100) {

            cout << "\n------"

                << "\n|Итоговая сумма: р." << setprecision(2) << fixed << total << "|\n"

                << "------\n\n";

        }

        else if (total > 10 && total < 100) {

            cout << "\n------"

                << "\n|Итоговая сумма: р." << setprecision(2) << fixed << total << "|\n"

                << "------\n\n";

        }

        else if (total < 10) {

            cout << "\n------"

                << "\n|Итоговая сумма: р." << setprecision(2) << fixed << total << "|\n"

                << "------\n\n";

        }

    }

    cout << divider << "\n\n";

}
