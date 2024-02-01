#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE

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
}