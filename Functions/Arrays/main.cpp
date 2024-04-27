//FunctionTemplates
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
//template - ������� ������
//typename - ������� ��������� ���
//T - ��� ���������� ����
void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T  Sum(T arr[], const int n);
const char*  Sum(char arr[], const int n);
template<typename T>T  Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
const char* Avg(char arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T  minValueIn(T arr[], const int n);
template<typename T>T  maxValueIn(T arr[], const int n);

template<typename T>T  minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>T  maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts);

template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;	//Sum of array elements
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;//Avarage of array elemnts
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(d_arr, D_SIZE, number_of_shifts);
	//Print(d_arr, D_SIZE);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(d_arr, D_SIZE, number_of_shifts);
	//Print(d_arr, D_SIZE);

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(c_arr, C_SIZE) << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Print(i_arr_2[0], ROWS*COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Print(i_arr_2[0], ROWS*COLS);
	cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS*COLS; i++)
	{
		for (int j = i+1; j < ROWS*COLS; j++)
		{
			if (arr[0][j] < arr[0][i])
			{
				T buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
			}
		}
	}
}
//https://www.youtube.com/watch?v=kliQ417Isww&pp=ygUXZGFyayB0cmFucXVpbGxpdHkgYWxidW0%3D
template<typename T>T  Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
const char*  Sum(char arr[], const int n)
{
	return "��� ���� ������ 'char' ����� �� �����������";
}
template<typename T>T  Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = T();	//T() - �������� �� ��������� ��� ���������� ����
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	return Sum(arr, n) / (double)n;
	//FreeBSD
	//Prohybited
}
const char* Avg(char arr[], const int n)
{
	return "��� ���� ������ 'char' AVG �� �����������";
	//FreeBSD
	//Prohybited
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

template<typename T>T  minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T  maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>T  minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
template<typename T>T  maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr[0], ROWS*COLS, number_of_shifts);
}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftRight(arr[0], ROWS*COLS, number_of_shifts);
}
