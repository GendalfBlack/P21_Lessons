#include <iostream>
using namespace std;

const char* path = "Z:/PKO/C++/p21/ConsoleApplication33/ConsoleApplication33/MyFile3.txt";
FILE* out;
FILE* in;

struct Book {
    char* name;
    char* author;
};

int main()
{
	Book* books = new Book[100];
	int i = 0;

	char* name = new char[50];
	char* author = new char[20];

	if (fopen_s(&in, path, "r") == NULL)
	{
		while (!feof(in)) {
			name = new char[50];
			fscanf_s(in, "%s", name, 50);
			author = new char[20];
			fscanf_s(in, "%s", author,20);
			books[i].name = name; 
			books[i].author = author;
			i++;
			if (feof(in)) { break; }
		}
		fclose(in);
	}

	for (int j = 0; j < i; j++)
	{
		cout << books[j].name << ' ' << books[j].author << '\n';
	}

	do
	{
		char name[50];
		char author[20];
		char answ[3];

		cout << "Name: ";
		fgets(name, 50, stdin);
		cout << "Author:";
		fgets(author, 20, stdin);
		if (fopen_s(&out, path, "a") == NULL){
			fprintf_s(out, "%s", name,50);
			fprintf_s(out, "%s", author,20);
			fclose(out);
		}

		cout << "Write one more?(y/n)";
		fgets(answ, 3, stdin);
		if (answ[0] == 'y')
		{
			continue;
		}else if(answ[0] == 'n'){
			break;
		}
	} while (true);
}