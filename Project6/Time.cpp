#include <iostream>

void Time_until_midnight() {
	std::cout << "Время в секундах, прошедшее с начала дня: ";
	int insec, i, sec, sec1, min, min1, hour, h, hour1;
	std::cin >> insec;
	hour = insec / 3600;
	h = insec % 3600;
	min = h / 60;
	sec = h % 60;
	std::cout << hour;
	std::cout << ":";
	std::cout << min;
	std::cout << ":";
	std::cout << sec;
	std::cout << "\n";

	hour1 = (86400 - insec) / 3600;
	i = (86400 - insec) % 3600;
	min1 = i / 60;
	sec1 = i % 60;
	std::cout << hour1;
	std::cout << ":";
	std::cout << min1;
	std::cout << ":";
	std::cout << sec1;
}

void task_2() {
	std::cout << "Время в секундах, прошедшее с начала рабочего дня: ";
	int insec, hour, hour1;
	std::cin >> insec;
	hour = insec / 3600;
	hour1 = ((28800 - insec) / 3600);
	std::cout << hour1;

}

int main() {
	setlocale(LC_ALL, "RU");
	Time_until_midnight();
	task_2();
	return 0;
}