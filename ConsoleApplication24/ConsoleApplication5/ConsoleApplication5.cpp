#include <iostream>
using namespace std;
/* калькулятор */
int getname(char* name) {
	if		(name[0] == 'a' && name[1] == 'd' && name[2] == 'd') { return 0; }
	else if (name[0] == 's' && name[1] == 'u' && name[2] == 'b') { return 1; }
	else if (name[0] == 'm' && name[1] == 'u' && name[2] == 'l') { return 2; }
	else if (name[0] == 'd' && name[1] == 'i' && name[2] == 'v') { return 3; }
	else if (name[0] == 'p' && name[1] == 'o' && name[2] == 'w') { return 4; }
	else if (name[0] == '+') { return 0; }
	else if (name[0] == '-') { return 1; }
	else if (name[0] == '*') { return 2; }
	else if (name[0] == '/') { return 3; }
	else if (name[0] == '^') { return 4; }
}
double _add(int a, int b) { return a + b; }
double _sub(int a, int b) { return a - b; }
double _mul(int a, int b) { return a * b; }
double _div(int a, int b) { return (double)a / b; }
double _pow(int a, int b) { return pow(a, b); }

double (*actions[5]) (int, int) = { _add, _sub, _mul,_div, _pow };

int main()
{
	char* word = new char[15];
	int a, b;
	while (true)
	{
		cin >> a >> word >> b;	cout << '=' << actions[getname(word)](a, b) << endl;
	}
}
