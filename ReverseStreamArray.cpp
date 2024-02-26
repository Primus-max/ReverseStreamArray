// Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.


#include <iostream>
#include <windows.h>
#include <random>

using namespace std;


template <typename T>
void FillArray(T arr[], int size);

template <typename T>
void PrintArray(T arr[], int size);

template <typename T>
void ReverseArray(T arr[], int size);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int sizze = 30;
	int Array[sizze];

	FillArray(Array, sizze);
	cout << "Массив до предобразования :" << endl;
	PrintArray(Array, sizze);
	
	ReverseArray(Array, sizze);
	cout << "Массив после предобразования :" << endl;
	PrintArray(Array, sizze);
}


template <typename T>
void FillArray(T arr[], int size) {
	random_device Random;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = Random() % (100 + 50) - 50;
	}
}

template <typename T>
void PrintArray(T arr[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}


template <typename T>
void ReverseArray(T arr[], int size) {
	for (int i = 0; i < size / 2; ++i) {
		T temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}	
}