#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
    char* text = new char[1000];
	int i = 0;
	while (true)
	{
		char c = _getch();
		cout << c;
		if (c == '1')
		{
			text[i] = '\0';
			break;
		}
		if (c == 13)
		{
			text[i] = '\n';
			cout << '\n';
		}
		else {
			text[i] = c;
		}
		i++;
	}
	cout << '\n';
	cout << text;
}
