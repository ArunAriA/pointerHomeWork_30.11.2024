#include <iostream>

using namespace std;

//void swapArr(int* arr, int* arr2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(arr2 + i) = *(arr + i);
//	}
//	cout << endl;
//}
//
//int main()
//{
//	srand(time(NULL));
//
//	int* p1, *p2;
//
//	const int size = 10;
//	int arr[size];
//	int arr2[size];
//
//	cout << "Perviy cikl : ";
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10;
//		cout << arr[i] << ' ';
//	}
//
//	cout << endl;
//	p1 = arr;
//	p2 = arr2;
//
//	swapArr(p1, p2, size);
//
//	cout << "Vtoroy cikl: ";
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr2[i] << ' ';
//	}
//
//	
//}







//void reverseArr(int* ptr, int size)
//{
//	int num1, num2;
//	for (int i = 0; i < size / 2; i++)
//	{
//		num1 = *(ptr + i);
//		num2 = *(ptr + (size - 1 - i));
//		*(ptr + i) = num2;	
//		*(ptr + (size - 1 - i)) = num1;
//	}
//}
//
//
//int main()
//{
//	int* ptr;
//	const int size = 10;
//	int arr[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10;
//		cout << arr[i] << ' ';
//	}
//
//	ptr = arr;
//
//	reverseArr(ptr, size);
//
//	cout << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//}












void swapArr(int* arr, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr2 + i) = *(arr + (size - 1 - i));
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));

	int* p1, * p2;

	const int size = 10;
	int arr[size];
	int arr2[size];

	cout << "Perviy cikl : ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << ' ';
	}

	cout << endl;
	p1 = arr;
	p2 = arr2;

	swapArr(p1, p2, size);

	cout << "Vtoroy cikl: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << ' ';
	}


}