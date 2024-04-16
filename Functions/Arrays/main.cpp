#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);

int  Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
int  minValueIn(int arr[], const int n);
int  maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

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
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	//cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	//cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
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
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return Sum(arr, n) / (double)n;
	//FreeBSD
	//Prohybited
}
int  minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int  maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n-number_of_shifts);
}