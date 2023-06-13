#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
using namespace std;

const char* path = "Z:/PKO/C++/p21/ConsoleApplication35/ConsoleApplication35/File2.bin";

ofstream out;
ifstream in;

/*
Задача 2. Записати у файл текст, зчитати та вивести слова з нового рядка.
*/

int main()
{
    char* text = new char[200];
    fgets(text, 200, stdin);

    out.open(path, ofstream::out);
    out.write(text, 200);
    out.close();

    char* text2 = new char[200];
    in.open(path, ifstream::in);
    in.read(text2, 200);
    in.close();

    for (char* pos = text2; *pos != '\0'; pos++)
    {
        if (*pos == ' ') { cout << '\n'; }
        else { cout << *pos; }
    }

    for (int i = 0; i < strlen(text2); i++)
    {
        if (text2[i] == ' ') { cout << '\n'; }
        else { cout << text2[i]; }
    }
}