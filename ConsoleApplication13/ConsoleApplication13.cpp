#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int const w = 15, h = 5; 
	// w - ������ ������/��������� (������ �����)
	// h - ������ ������/������� (������� �����)

	int arr[h][w];

	for (int i = 0; i < h; i++) // ������� ���� �������� ����� ������
	{
		for (int j = 0; j < w; j++) // �������� ���� �������� �������� �����
		{
			// ��������� ���������� ����� � ������ ������� ������
			arr[i][j] = rand() % 90+10; 
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}