#include <iostream>
using namespace std;
template <typename T>
void printArray(T* arr, int n);
template <typename T>
void fillArray(T* arr, int n);
// ������ 1. ������� �� ������ ��������� ����� arr, ���� ����� 
// n �� ���� ����� x, �� ����� ������ � ����� ������ � ������� 
// ����� ���������� ����� � ��� ��������� �� ���������.
template <typename T>
T* appendArray(T* arr, int n, T x)
{
    int* arr2 = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[n] = x;
	delete[] arr;
	return arr2;
}
// ������ 2. ������� �� ������ ��������� ����� arr, ���� �����
// n �� ������ �������� i, �� ������� ��������� ������� � ������
// �� ��������.

template <typename T>
T* removeElement(T* arr, int n, int i) {
	int* arr2 = new int[n - 1];
	for (int j = 0; j < i; j++)
	{
		arr2[j] = arr[j];
	}
	for (int j = i + 1; j < n; j++)
	{
		arr2[j - 1] = arr[j];
	}
	delete[] arr;
	return arr2;
}
int main()
{
	cout << "Type array size: ";
	int n;;
	cin >> n;
	int* arr = new int[n];
	fillArray(arr, n);
	arr = removeElement(arr, n, 3);
	n--;
	printArray(arr, n);
}


template <typename T>
void printArray(T* arr, int n) {
    for (int i = 0; i < n; i++) { cout << arr[i] << ' '; } cout << '\n';
}
template <typename T>
void fillArray(T* arr, int n) {
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
}