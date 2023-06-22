#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	char* text = new char[1000];
	char* word = new char[20];

	fgets(text, 1000, stdin);
	fgets(word, 20, stdin);
	for (int i = 0; i < 20; i++)
	{
		if (word[i] == '\n') { word[i] = '\0'; break; }
	}


	for (int i = 0; i < strlen(text); i++)
	{
		char* word2 = new char[20];
		int k = 0;
		for (int j = i; text[j] != ' ' && text[j] != '\0'; j++)
		{
			word2[k] = text[j]; k++;
		}
		word2[k] = '\0';
		if (strcmp(word, word2) == 0)
		{
			cout << "Done";
		}
		i += k;
	}
}
