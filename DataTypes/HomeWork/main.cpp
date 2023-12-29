# include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	double money;
	cout << "¬ведите сумму: "; cin >> money;
	money += 1e-10;	//1*10^-10
	cout << money << endl;
	int grn = money;	//не€вное преобразование типов из 'double' в 'int' с потерей данных
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
}