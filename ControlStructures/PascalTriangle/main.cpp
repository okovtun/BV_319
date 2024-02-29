//PascalTriangle
#include<iostream>
using namespace std;

const int width = 8;

typedef unsigned long long int DataType;	//Директива 'typedef' создает псевдоним для существующего типа данных:
//typedef существующий_тип_данных новое_имя;

void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	for (int i = 0; i < h; i++)
	{
		cout.width(width/2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	DataType nf = 1;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		DataType mf = 1;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width / 2);//	задает ширину вывода на экран, а точнее, определяет, сколько знакопозиций будет занимать выводимое значение
			//Если выводимое значени занимает больше знакопозиций, то оно выйдет за пределы указанной ширины.
			cout << "";	// Даже при выводе пустой строки, она займет всю заданную ширину (width/2)
		}
		cout.width(width);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			DataType nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}
		cout << endl;
	}
}