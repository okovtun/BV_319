//FunctionTemplates
#include"FillRand.h"
//#include"FillRand.cpp"	//Если функция НЕ шаблонная, то ее реализация НИ В КОЕМ СЛУЧАЕ НЕ ПОДКЛЮЧАЕТСЯ НА МЕСТО ВЫВОЗА
#include"Print.h"
#include"Print.cpp"	//Если функция шаблонная, то на место вывоза ОБЯЗАТЕЛЬНО ПОДКЛЮЧАЕТСЯ РЕАЛИЗАЦИЯ
#include"Sort.h"
#include"Sort.cpp"
#include"Shift.h"
#include"Shift.cpp"
#include"Statistics.h"
#include"Statistics.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;	//Sum of array elements
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;//Avarage of array elemnts
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(d_arr, D_SIZE, number_of_shifts);
	//Print(d_arr, D_SIZE);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(d_arr, D_SIZE, number_of_shifts);
	//Print(d_arr, D_SIZE);

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, C_SIZE) << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Print(i_arr_2[0], ROWS*COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Print(i_arr_2[0], ROWS*COLS);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
}