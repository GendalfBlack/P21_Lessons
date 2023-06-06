#include <iostream>
using namespace std;

const char* path = "Z:/PKO/C++/p21/ConsoleApplication33/ConsoleApplication33/MyFile2.txt";
FILE* out;
FILE* in;

int main()
{
	int arr[5] = { 1,22,3,4,5 };

	if (fopen_s(&out, path, "w") == NULL) // файл за шляхом path відкрився без помилки
	{
		for (int i = 0; i < 5; i++)
		{
			fprintf_s(out, "%d,", arr[i], sizeof(int));
		}
	}
	fclose(out);

	int new_arr[5] = {0,0,0,0,0};
	if (fopen_s(&in, path, "r") == NULL) // файл за шляхом path відкрився без помилки
	{
		int k = 0;
		while (!feof(in))
		{
			int* i = new int;
			fscanf_s(in, "%d,", i, sizeof(int));
			new_arr[k] = *i;
			k++;
			if (k == 5) { break; }
		}
	}
	fclose(in);

	for (int i = 0; i < 5; i++)
	{
		cout << new_arr[i] << ',';
	}
}
