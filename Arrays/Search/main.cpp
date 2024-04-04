//Search
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//		Поиск повторений:
	for (int i = 0; i < n; i++)
	{
		//arr[i] - выбранный элемент
		bool met_before = false;	//предполагаем, что выбранное значение ранее не встречалось,
		//но это нужно проветрить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;				//break - прерывает текущую итерацию и все последующие.
			}
		}
		if (met_before)continue;	//continue - прерывает текущую итерацию, и переходит к следующей.

		int counter = 0;	//счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		//if (counter > 1) printf("Значение %i встречается %i раз\n", arr[i], counter);
		if (counter) printf("Значение %i повторяется %i раз\n", arr[i], counter);
		//https://legacy.cplusplus.com/reference/cstdio/printf/
//		if (counter)cout << "Значение " << arr[i] << " повторяется " << counter << " раз" << endl;
//		if (counter)cout << "Value " << arr[i] << " repeats " << counter << " times" << endl;
	}
}