#include <iostream>
#include <Windows.h>
using namespace std;
/*Завдання 4: Напишіть програму, яка просить користувача ввести речення,
а потім змінює порядок слів у реченні. Використовуйте динамічні масиви
для зберігання слів у реченні*/

void shuffle(char** arr, int n) {
	for (int i = 0; i < 100; i++)
	{
		int randi = rand() % n;
		int randj = rand() % n;
		swap(arr[randi], arr[randj]);
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char** sentence = new char* [100];
	int n = 0;
	char* word = new char[100];
	cout << "Напиши кожне слово речення окремо(в кінці просто напишіть \"END\"): \n";
	while (true)
	{
		word = new char[100];
		cin >> word;
		if (word[0] == 'E' && word[1] == 'N' && word[2] == 'D') { break; }
		sentence[n] = word; n++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << sentence[i] << ' ';
	}cout << endl;
	shuffle(sentence, n);

	for (int i = 0; i < n; i++)
	{
		cout << sentence[i] << ' ';
	}
}
