//DataTypes
#include<iostream>
using namespace std;

/*
--------------
Variable - это именованная область памяти, содержимое которой может изменяться в процессе выполнения программы.
					
			type name;	//синтаксис объявления переменной
type - тип переменной, определяет три вещи:
		1. сколько памяти переменная будет занимать;
		2. какие значения она сможет принимать;
		3. какие операции над ней можно выполнять;
  I) Логические типы: bool (Boolean) 1 Byte: true либо false;
		true  - 1
		false - 0
		0 - это false, а true - это все что НЕ 0

--------------
*/

//#define LOGICAL_TYPES

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello DataTypes" << endl;
#if defined LOGICAL_TYPES
	cout << true << "\n";
	cout << false << endl;
	cout << (bool)123 << endl;
	cout << (bool).00000000000001 << endl;

	bool is_winter = true;
	bool is_night = true;
	2 == 3;	//false
	2 > 3;	//false
	2 < 3;	//true
#endif
}