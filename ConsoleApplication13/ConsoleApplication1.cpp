#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int const w = 7;

	char arr[w][w];

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < w; j++)
		{
			arr[i][j] = '*';
		}
	}
	// i == j			- ������� ��������
	// i <= j			- ��� �������� ���������
	// i >= j			- �� �������� ���������
	// i + j == w - 1	- ����� ��������
	// i + j <= w - 1	- ��� ������ ���������
	// i + j >= w - 1	- �� ������ ���������


	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i >= j)
			{
				cout << "*,* ";
			}else{
				cout << i << ',' << j << ' ';
			}
			
		}
		cout << '\n';
	}
}
