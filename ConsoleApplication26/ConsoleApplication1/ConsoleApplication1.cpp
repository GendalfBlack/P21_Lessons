#include <iostream>
using namespace std;

/*������ 1. �������� �������� ����� ���������� ����� �����. ³���������� ���� �� ����������. */

void sort(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j-1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}
/*������ 2. �� ��������� ������� ������ ������ ������ �������� �� ����� ����������*/
int linearSearch(int* arr, int n, int element) {
	for (int i = 0; i < n; i++)
	{
		cout << '+';
		if (arr[i] == element) { return i; }
	}
	return -1;
}
/*������ 3. �� ��������� ������ �� �������� ������ ������ � ������������� ����� ������� �� ��� ����������*/
int binarySearch(int* arr, int begin, int end, int element) {
	cout << '+';
	int middle = (begin + end) / 2;
	if (element < arr[middle]) { return binarySearch(arr, begin, middle-1, element); }
	else if (element > arr[middle]) { return binarySearch(arr, middle+1, end, element); }
	else if (element == arr[middle]) { return middle; }
	return -1;
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 89 + 10; // �� 10 �� 99
		cout << arr[i] << ' ';
	}cout << endl;
	sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}cout << endl;
	int element;
	cin >> element;
	cout << linearSearch(arr, n, element) << endl;
	cout << binarySearch(arr, 0, n - 1, element) << endl;
}