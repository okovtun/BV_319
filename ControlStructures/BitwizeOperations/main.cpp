#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	unsigned char a = 5;
	unsigned char b = ~a;
	cout << (int)b << endl;
	cout << (5 | 6) << endl;
	cout << (5 & 6) << endl;
	cout << (5 ^ 6) << endl;

	//			Остаток от деления
	cout << (51 & 15) << endl;	//остаток от деления на 16
	//cout << (25 & 6) << endl;
	//cout << (55 & 9) << endl;
}