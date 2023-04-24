#include <iostream>
using namespace std;

void zad1()
{
	double Dis = 10, result = 0;
	for (int i = 0; i < 7; i++)
	{
		cout << "Дистанция бегга в день #" << i + 1 << "ровна :" << Dis<<"\n";
		result += Dis;
		Dis *= 1.1;
	}
	cout << "Суммарная Дистанция ровна:" << result;
}
void zad2()
{
	int amebs = 1, x = 1;
	for (int i = 0; i < 24; i+=3)
	{
		amebs *= 2;
		cout << "колво амеб в шаге #" << x++ << " равны :" << amebs<< "\n";
	}
} 
void zad3()
{
	double k, h, y = 2, result;

	cout << "Введите длину плаки:";
	cin >> k;

	cout << "Введите шаг:";
	cin >> h;
	if (h > 0 && h <= 1)
	{
		do
		{
			result = asin((pow((k - y), 0.5)) / k) * 57.3;
			cout << "угол для длины катета:"<< y<< " равен :" << result << " градусов и :"<< result/57.3<< " радиан\n";
			y += h;

		} while (y < 3);
	}
	else
	{
		cout << "Неверное h - шаг";
	}
}
void zad4()
{
	int x;
	for (int i =0; i <= 16; i++)
	{
		x = 64 - (i * 4);
		x /= 2;
		cout << "Количество Кроликов:" << i << " Количество гусей:" << x << "\n";
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "\n" << "Задание 1" << "\n";
	zad1();
	cout << "\n" << "Задание 2" << "\n";
	zad2();
	cout << "\n" << "Задание 3" << "\n";
	zad3();
	cout << "\n" << "Задание 4" << "\n";
	zad4();
}

