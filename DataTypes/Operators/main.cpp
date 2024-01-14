//Operators
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания
//#define INCREMENT_DECREMENT		//3) Increment/Decrement (++/--)
//#define COMPOUND_ASSIGNMENTS		//4) Составные присваивания
//#define COMPARISON_OPERATORS		//5) Операторы сравнения
#define LOGICAL_OPERATORS			//6) Логические операторы

void main()
{
	setlocale(LC_ALL, "");
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary aster
	//*3;	

#ifdef ARITHMETICAL_OPERATORS
	//Unary:  +, -;
	//Binary: +, -, *, /, %;
	//		  % - остаток от деления (modulo)
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << 3. / 5 << endl;
	//cout << 3. % 5 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//Оператор присваивания, переменной слева присваивает значение выражения справа.
	//				l-value = r-value;
	const double PI = 3.14;
	//PI = 3.1459;

	int a, b, c;

	a = b = c = 0;
	
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	//Префиксная и постфиксная
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	int j = i++;

	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	//a = a + b;
	//a += b;
	a = a + b;		a += b;
	a = a - b;		a -= b;
	a = a * b;		a *= b;
	a = a / b;		a /= b;
	a = a % b;		a %= b;
	cout << a << endl;
#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATORS
	true;
#endif // COMPARISON_OPERATORS

#ifdef LOGICAL_OPERATORS
	cout << (!true == false) << endl;
#endif // LOGICAL_OPERATORS

}