#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE
//#define FOR_SYNTAX

//#define FACTORIAL
//#define POWER
//#define ASCII
#define FIBONACCI_1
#define FIBONACCI_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE
	int i = 0;	//счетчик цикла
	int n;		//количество итераций
	cout << "Введите количетво итераций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // WHILE

#ifdef FOR_SYNTAX
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef FACTORIAL
	char a = 100;
	a += 200;
	cout << (int)a << endl;
	int n;
	cout << "Введите число: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//основание степени (base)
	int n;		//показатель степени(exponent)
	double N = 1;	//степень	(power)
	cout << "Введите основание степени: "; cin >> a;	//Enter power base
	cout << "Введите показатель степени:";cin >> n;	//Enter power exponent
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	//Comma operator
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

}