
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

        << "\n\n1) �������� �������"

        << "\n2) ������ �����"

        << "\n3) ������� �����"

        << "\n4) �������"

        << "\n5) �������"

        << "\n6) ����� �� ����";

    cout << "\n\n��� ����� (1-6)? ";

    cin >> choice;

    cout << "\n";

    cout << divider;

    do {

        switch (choice) {

        case 1:

            int  carpL, carpT, tigr, cheese, snackChoice; ;

            cout << "\n\n1) �������� �� ������"

                << "\n2) �������� �� ��������"

                << "\n3) ������ �� �������� ��������"

                << "\n4) ������ �����";

            cout << "\n\n����� ���������� �������? ";

            cin >> snackChoice;

            switch (snackChoice) {

            case 1:

                cout << "\n������� ������ �������� �� ������ �� �������? ";

                cin >> snackNum;




                cout << "\n" << divider;

                break;

            case 2:

                cout << "\n������� ������ �������� �� �������� �� �������? ";

                cin >> snackNum;


                cout << "\n" << divider;

                break;

            case 3:

                cout << "\n������� ������ ������� �� �������� �������� �� �������? ";

                cin >> snackNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\n������� ������ ������� ����� �� �������?";

                cin >> snackNum;

                cout << "\n" << divider;

                break;

            default:

                cout << snackNum << " ������������ ������!";

                int carpachoL, carpachoC, tartar, cheese, snackChoice;

                cout << "\n\n1) �������� �� ������"

                    << "\n2) �������� �� ��������"

                    << "\n3) ������ �� �������� ��������"

                    << "\n4) ������ �����";

                cout << "\n\n �������� ����� ";

                cin >> snackChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"
                << "\n\n Menu"

                << "\n\n1) �������� �������"

                << "\n2) ������ �����"

                << "\n3) ������� �����"
                << "\n4) �������"

                << "\n5) �������"

                << "\n6) ����� �� ����";

            cout << "\n\n��� ����� (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

        case 2:

            int tom, soup, tai, borshch, sideChoice;

            cout << "\n\n1) ���-�� � ����������"

                << "\n2) ��� �� ��������� � ����������� ������"

                << "\n3) ������� ��� � ������� � ����������"

                << "\n4) ������� ���� �� ��������";

            cout << "\n\n�����  ������ ����� �� �������? ";

            cin >> sideChoice;

            switch (sideChoice) {

            case 1:

                cout << "\n������� ������ ���-��� � ��������� �� �������?";

                cin >> sideNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\n������� ������ ���� �� ��������� � ����������� ������ �� �������? ";

                cin >> sideNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\n������� ������ �������� ���� �� �������? ";

                cin >> sideNum;
                cout << "\n" << divider;

                break;

            case 4:

                cout << "\n������� ������ �������� ����� � �������� �� �������? ";

                cin >> sideNum;

                cout << "\n" << divider;

                break;

            default:

                cout << sideNum << " ������������ ������";

                int carpachoL, carpachoC, tartar, cheese, snackChoice;

                cout << "\n\n1) ���-�� � ����������"

                    << "\n2) ��� �� ��������� � ����������� ������"

                    << "\n3) ������� ��� � ������� � ����������"

                    << "\n4) ������� ���� �� ��������";

                cout << "\n\n����� ������ ����� �� �������? ";

                cin >> sideChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"

                << "\n\n Menu"

                << "\n\n1) �������� �������"

                << "\n2) ������ �����"

                << "\n3) ������� �����"

                << "\n4) �������"

                << "\n5) �������"

                << "\n6) ����� �� ����";

            cout << "\n\n��� ����� (1-6)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

        case 3:

            int kambala, semga, ytka, telatina, hotChoice;

            cout << "\n\n1) ������� �� ������� ��-�������"

                << "\n2) ����� ����� � �������� �������"

                << "\n3) ���� ��-�������"

                << "\n4) �������� ��� ������ � ������ ����";

            cout << "\n\n����� ������� ����� �� �������? ";

            cin >> hotChoice;

            switch (hotChoice) {

            case 1:

                cout << "\n������� ������ ������� �� ������� �� -������� �� �������? ";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\n������� ������ ����� ����� � ������� �� �������? ";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\n������� ������ ���� ��-�������� �� �������";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\n������� ������ ������� ��� ������ ������ ���� �� �������? ";

                cin >> hotNum;

                cout << "\n" << divider;

                break;

            default:

                cout << hotNum << " is not a valid character!";

                int kambala, semga, ytka, telatina, hotChoice;


                cout << "\n\n1) ������� �� ������� ��-�������"

                    << "\n2) ����� ����� � �������� �������"

                    << "\n3) ���� ��-�������"

                    << "\n4) �������� ��� ������ � ������ ����";

                cout << "\n\n����� ������� ����� �� �������? ";

                cin >> hotChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"

                << "\n\n Menu"

                << "\n\n1) �������� �������"

                << "\n2) ������ �����"

                << "\n3) ������� �����"

                << "\n4) �������"

                << "\n5) �������"

                << "\n6) ����� �� ����";

            cout << "\n\n��� ����� (1-6)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 4:

            int cheesecack, napoleon, beeze, fruits, desertChoice;

            cout << "\n\n1) �������"

                << "\n2) ���� ��������"

                << "\n3) ���� � ����������"

                << "\n4) ������ ������";

            cout << "\n\n ��� �� �������? ";

            cin >> desertChoice;

            switch (desertChoice) {

            case 1:

                cout << "\n������� ������ �������� �� �������? ";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\n������� ������ ��������� �� �������? ";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\n������� ������ ���� � ���������� �� �������? ";

                cin >> snackNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\n������� ������ ���������� ������ �� �������?";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            default:

                cout << desertNum << " is not a valid character!";
                int cheesecack, napoleon, beeze, fruits, desertChoice;

                cout << "\n\n1) �������"

                    << "\n2) ���� ��������"

                    << "\n3) ���� � ����������"

                    << "\n4) ������ ������";

                cout << "\n\n �������� ����� ";

                cin >> desertChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\ Menu"
                << "\n\ Menu"

                << "\n\n1) �������� �������"

                << "\n2) ������ �����"

                << "\n3) ������� �����"

                << "\n4) �������"

                << "\n5) �������"

                << "\n6) ����� �� ����";

            cout << "\n\n��� ����� (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;


            /////////////////////////////////////////////////////////////////////////////////////////////////////////



        case 5:

            int coca, tee, coffee, juise, drinkChoice;

            cout << "\n\n1) ���� ����"

                << "\n2) ��� ������ ��������"

                << "\n3) ���� "

                << "\n4) ��� � �����������";

            cout << "\n\n��� �� �������? ";

            cin >> drinkChoice;

            switch (drinkChoice) {

            case 1:

                cout << "\n������� ������� ���� �� �������? ";

                cin >> desertNum;

                cout << "\n" << divider;

                break;

            case 2:

                cout << "\n������� ������ ���  �� �������? ";

                cin >> drinkNum;

                cout << "\n" << divider;

                break;

            case 3:

                cout << "\n������� ������ ���� �� �������? ";

                cin >> drinkNum;

                cout << "\n" << divider;

                break;

            case 4:

                cout << "\n������� ������ ���������� ������ �� �������?";

                cin >> drinkNum;

                cout << "\n" << divider;

                break;

            default:

                cout << drinkNum << " ������������ ������!";
                int cheesecack, napoleon, beeze, fruits, desertChoice;

                cout << "\n\n1) ���� ����"

                    << "\n2) ��� ������ ��������"

                    << "\n3) ���� "

                    << "\n4) ��� � �����������";

                cout << "\n\n �������� ����� ";

                cin >> drinkChoice;

                cout << "\n" << divider;

                break;

            }

            cout << "\n\n Menu"
                << "\n\n Menu"

                << "\n\n1) �������� �������"

                << "\n2) ������ �����"

                << "\n3) ������� �����"

                << "\n4) �������"

                << "\n5) �������"

                << "\n6) ����� �� ����";

            cout << "\n\n��� ����� (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;

            ///////////////////////////////////////





        case 6:

            cout << "\n\n�����, ��� �� �� ����� ������ ��� ���� �����������. ������������� ���!";

            break;

        default:

            cout << "\n\n" << choice << " ��� �� ���������� �����. ���������� ������� 1-5.\n\n";

            cout << divider;

            cout << "\n\ Menu"

                << "\n\ Menu"

                << "\n\n1) �������� �������"

                << "\n2) ������ �����"
                 
                << "\n3) ������� �����"

                << "\n4) �������"

                << "\n5) �������"

                << "\n6) ����� �� ����";

            cout << "\n\n��� ����� (1-5)? ";

            cin >> choice;

            cout << "\n";

            cout << divider;

            break;
        }




    } while (choice != 6);

    if (choice == 6) {

        cout << "\n\n�������� ������\n";

        if (snackNum != 1) {

            cout << "\n" << snackNum << "�������";

        }

        else {

            cout << "\n" << snackNum << " �������";

        }

        if (sideNum != 1) {

            cout << "\n" << sideNum << " ������ �����";

        }



        else if(sideNum == 0|| sideNum > 1){

            cout << "\n" << sideNum << " ������ ����";

        }

        if (hotNum != 1) {

            cout << "\n" << hotNum << " ������� �����";

        }

        else {

            cout << "\n" << hotNum << " ������� �����";

        }

        if (desertNum != 1) {
            cout << "\n" << desertNum << " ������";
        }
        else {

            cout << "\n" << desertNum << " �������";
        }

        if (drinkNum != 1) {
            cout << "\n" << drinkNum << " �������\n\n";
        }
        else {

            cout << "\n" << drinkNum << " �������\n\n";
        }
        cout << "�������� ������";

        snackPrice = snackPrice * snackNum;

        sidePrice = sidePrice * sideNum;

        hotPrice = hotPrice * hotNum;

        desertPrice = desertPrice * desertNum;

        drinkPrice = drinkPrice * drinkNum;

        total = (snackPrice + sidePrice + hotPrice + desertPrice + drinkNum);

        salesTax = total * salesTax;

        cout << "\n\n���� ���� ��� ���: �." << setprecision(2) << fixed << total;

        total = total + salesTax;

        cout << "\n���: �." << setprecision(2) << fixed << salesTax;

        if (total > 100) {

            cout << "\n------"

                << "\n|�������� �����: �." << setprecision(2) << fixed << total << "|\n"

                << "------\n\n";

        }

        else if (total > 10 && total < 100) {

            cout << "\n------"

                << "\n|�������� �����: �." << setprecision(2) << fixed << total << "|\n"

                << "------\n\n";

        }

        else if (total < 10) {

            cout << "\n------"

                << "\n|�������� �����: �." << setprecision(2) << fixed << total << "|\n"

                << "------\n\n";

        }

    }

    cout << divider << "\n\n";

}
