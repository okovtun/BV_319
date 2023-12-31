﻿//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

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
 II) Символьные типы: char (Character - Символ) 
	 Занимает 1 Byte памяти и содержит один из 256 сиволов в кодировке 
	 ASCII - American Standard Code for Information Interchange.
III) Числовые типы. Делятся на целочисленные и вещественные.
	 Целочисленные типы предназанчены для хранения целых чисел,
	 а вещественные - для хранения дробных чисел.
	 В свою очередь целочисленные типы делятся на беззнаковые (unsigned),
	 могут хранить только положительные целые числа, изнаковые (signed),
	 могут хранить как положительные, так и отрицательные целые числа.

identitfier - это имя.
				Правила именования переменных:
1. ABC...Zabc...z012...9_;
2. 
3. 
4. 
--------------
*/

#define TYPE_INFO(TypeName, Size, minValue, maxValue)\
	cout << "Тип данных '" << ##TypeName << "' занимает " << ##Size \
		<< " Байт памяти\nи принимает значения в диапазоне:\n"\
		<< ##TypeName << ": " << ##minValue << " ... " << ##maxValue<<";\n"

#define delimiter "\n------------------------------------------------\n"

//#define LOGICAL_TYPES
//#define INTEGRAL_TYPES
//#define FLOATING_TYPES
//#define DECLARATION_AND_INITIALIZATION

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
	
#ifdef INTEGRAL_TYPES
	cout << "int: ";
	cout << sizeof(int) << endl;
	//макроопределений Visual Studio
	TYPE_INFO("short", sizeof(short), SHRT_MIN, SHRT_MAX);
	cout << "unsigned int: "
		<< 0 << " ... "
		<< UINT_MAX << endl;//UINT - unsigned int\
	lkdsjfglsdgldshgldsg
	//cout << "  signed int: " << INT_MIN << " ... " << INT_MAX << endl;
	cout << delimiter << endl;
#endif // INTEGRAL_TYPES

#ifdef FLOATING_TYPES
	//float
//double
	TYPE_INFO("float", sizeof(float), FLT_MIN, FLT_MAX);
	cout << delimiter << endl;

	TYPE_INFO("double", sizeof(double), DBL_MIN, DBL_MAX);
#endif // FLOATING_TYPES

#ifdef DECLARATION_AND_INITIALIZATION
	/*int a;
int t;
double price;
double price_of_coffee;
double priceOfCoffee;
double PriceOfCoffee;*/
//snake_case_style
//PascalCaseStyle
//CamelCaseStyle
//smallCamel
//BigCamel

	double price_of_coffee = 0;		//Инициализация при объявлении
	cout << price_of_coffee << endl;

	//			инициализация (initialization)
	int a;	//объявление переменной
	a = 0;	//инициализация переменной после объявления оператором присваивания
	int b;	//объявление переменной
	cout << "Введите число: "; cin >> b;	//инициализация переменной после объявления вводом с клавиатуры
	//Инициализация - это когда в переменную первый раз что-то записывают, не важно каким образом.
	//Когда мы сами записали туда значение, мы уже знаем что хранится в переменной, 
	//это значение лежит в контексте нашей задачи.  
#endif // DECLARATION_AND_INITIALIZATION

	double price_of_coffee;
	int number_of_cups;
	cout << "Введите стоимость одной чашки кофе: "; cin >> price_of_coffee;
	cout << "Введите количество чашек: "; cin >> number_of_cups;

	cout << "Стоимость одной чашки: "<< price_of_coffee << " руб." << endl;
	cout << "Количество чашек: " << number_of_cups << endl;
	cout << "Общая стоимость: " << price_of_coffee * number_of_cups << " рублей\n";
}