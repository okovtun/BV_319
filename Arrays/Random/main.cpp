//Random
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{
		system("CLS");	//Функция system() позволяет вызвать любую команду командной строки (консоли)
						//Команда "CLS" (Clear Screen) - очищает окно консоли
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)
		{
			std::cerr << "Error: введены некорректные значения" << endl;
			system("PAUSE");	//Команда "PAUSE" приостанавливает выполнение программы до нажатия любой клавиши
		}
	} while (minRand >= maxRand);
	//заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;	//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	}

	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//сортировка массива:
	for (int i = 0; i < n; i++)//счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)//счетчик 'j' перебирает оставшиеся элементы
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//вывод отсортированного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}