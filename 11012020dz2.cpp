//* Пользователь 	вводит с клавиатуры расстояние до 	аэропорта и время, за которое нужно 	доехать.Вычислить скорость, с которой 	ему нужно ехать.
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int rast, h, m;
	cout << "Введите растояние (в км.): ";
	cin >> rast;
	cout << "Введите время (в часах, затем в минутах): ";
	cin >> h >> m;
	cout << rast / double(h + (m / 60)) << " км/час" << endl;
}
