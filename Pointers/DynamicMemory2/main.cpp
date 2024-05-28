#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int* arr, int& n, const int value);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];	//Оператор 'new' возвращает адрес выделенной памяти

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;

	arr = push_back(arr, n, value);
	Print(arr, n);
	
	delete[] arr;	//0x00622158
}

void FillRand(int arr[], const int n)
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
		cout << *(arr + i) << tab;
	}
	cout << endl;
}

int* push_back(int* arr, int& n, const int value)
{
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];

	//2) Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) Удаляем исходный массив:
	delete[] arr;	//0x00622778

	//4) Подменяем адрес старого массива адресом нового массива:
	arr = buffer;

	//5) Только после всего этого в конце массива появляется элемент,
	//	 в который можно сохранить добавляемое значение:
	arr[n] = value;

	//6) После того как в массив добавился элемент, количество его элементов
	//	 увеличилось на 1:
	n++;

	//buffer = nullptr;	//указатель на 0
	return buffer;
}