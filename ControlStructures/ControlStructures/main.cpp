//ControlStructures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define IF_ELSE
//#define WHILE_1
#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;

	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Сильный мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "Вы на северном полюсе" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0;	//счетчик цикла (loop counter)
	int n;		//количество итераций (number of iterations)
	cout << "Введите количество итераций: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

}