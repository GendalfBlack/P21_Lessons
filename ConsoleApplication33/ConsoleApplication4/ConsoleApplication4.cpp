#include <iostream>
using namespace std;
const char* path = "Z:/PKO/C++/p21/ConsoleApplication33/ConsoleApplication33/MyFile5.txt";
FILE* out;
FILE* in;
/*
   Задача 2. Створити масив з випадкових цілих чисел та переписати його в 
   файл. Після чого створити програму що прочитає з файлу всі числа та порахує
   суму всіх чисел і виведе її на екран.
*/

int main()
{
	int arr[50];
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	if (fopen_s(&out, path, "w") == NULL)
	{
		for (int i = 0; i < 50; i++)
		{
			fprintf_s(out, "%d ", arr[i]);
		}
		fclose(out);
	}

	if (fopen_s(&in, path, "r") == NULL)
	{
		int sum = 0;
		while (!feof(in))
		{
			int* a = new int;
			fscanf_s(out, "%d ", a);
			sum += *a;
		}
		cout << sum;
		fclose(out);
	}
}
