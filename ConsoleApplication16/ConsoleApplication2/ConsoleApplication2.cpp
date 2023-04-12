#include <iostream>
using namespace std; 

void printline();
void printline(int n);
void printline(char s);
void printline(int n, char s);

int main()
{
	printline();
	printline(50);
	printline(50, '@');
	printline('*');
}

void printline(int n, char s) { for (int i = 0; i < n; i++) { cout << s; }cout << '\n'; }
void printline() { printline(120, '-'); }
void printline(int n) { printline(n, '-'); }
void printline(char s) { printline(120, s); }

