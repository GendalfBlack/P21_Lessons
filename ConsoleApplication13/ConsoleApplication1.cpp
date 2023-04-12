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
	// i == j			- головна діагональ
	// i <= j			- над головною діагоналлю
	// i >= j			- під головною діагоналлю
	// i + j == w - 1	- друга діагональ
	// i + j <= w - 1	- над другою діагоналлю
	// i + j >= w - 1	- під другою діагоналлю


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
