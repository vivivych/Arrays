#include <iostream>
using namespace std;

int Sum(int arr[], const int SIZE);
double Arithmean(int arr[], const int SIZE);
int MaxValue(int arr[], const int SIZE);
int MinValue(int arr[], const int SIZE);
void FillRand(int arr[], const int SIZE);
void Print(int arr[], const int SIZE);
void Sort(int arr[], const int SIZE);

int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 5;
	int arr[SIZE];
	int shift;
	FillRand(arr, SIZE);
	cout << "Изначальный массив : \t";
	Print(arr, SIZE); cout << endl;
	Sort(arr, SIZE);
	cout << "Отсортированный массив : \t";
	Print(arr, SIZE); cout << endl;
	cout << "Сумма элементов массива : " << Sum(arr, SIZE) << "\n\n";
	cout << "Среднее арифметическое элементов : " << Arithmean(arr, SIZE) << "\n\n";
	cout << "Максимальное значение массива : "<< MaxValue(arr, SIZE) << "\n\n";
	cout << "Минимальное значение массива : " << MinValue(arr, SIZE) << "\n\n";
}
void FillRand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{

		arr[i] = rand() % 100;
    }
}
void Print(int arr[], const int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		cout <<  arr[i] << "\t";

    }
	cout << endl;
}
void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
    for (int j = i + 1; j < SIZE; j++)
		if (arr[j] < arr[i])
		{
			int buffer = arr[i];
			arr[i] = arr[j];
			arr[j] = buffer;
		}
	}
}

double Arithmean(int arr[], const int SIZE)
{
	double arithmean = (double)Sum(arr,SIZE) / SIZE;

	return arithmean;
}
int Sum(int arr[], const int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int MaxValue(int arr[],const int SIZE)
{
	int MaxElement = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
     if (arr[i] > MaxElement)
		 {
			 MaxElement = arr[i];
		 }
	}
	return MaxElement;
}
int MinValue(int arr[], const int SIZE)
{
	int MinElement = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < MinElement)
		{
			MinElement = arr[i];
		}
	}
	return MinElement;

}
//











