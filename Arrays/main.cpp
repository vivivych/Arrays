#include <iostream>
using namespace std;



void main()
{


	setlocale(LC_ALL, "ru");

	const int size = 5;
	int arr[size];
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "\t\t";
		cin >> arr[i];
	}
	cout << "\n";
	cout << "Вывод введенного массива на экран: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "\t\t";
		cout << arr[i] << endl;
	}
	cout << "\n";
	cout << "Вывод массива в обратном порядке: " << endl;

	for (int i = size - 1; i >= 0; i--)
	{
		cout << "\t\t";
		cout << arr[i] << endl;
	}
	cout << "\n";
	cout << "Вывод суммы элементов массива: " << endl;

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	cout << "\t\t" << sum << endl;
	cout << "\n";
	cout << "Вывод среднего арифметического массива: " << endl;

	float arithmean = (float)sum / size;
	cout << "\t\t" << arithmean << endl;
	cout << "\n";
	cout << "Вывод наименьшего элемента массива: " << endl;

	int MinElement = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < MinElement)
		{
			MinElement = arr[i];
		}
	}
	cout << "\t\t" << MinElement << endl;
	cout << "\n";
	cout << "Вывод наибольшего элемента массива: " << endl;

	int MaxElement = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > MaxElement)
		{
			MaxElement = arr[i];
		}
	}
	cout << "\t\t" << MaxElement << endl;
}