#include <iostream>
using namespace std;

void t6(double a, double b, double i) {
    cout << "-----";
	for (double k = a; k <= b; k += i){ cout << "-------"; }
	cout << "\n| x |";
	for (double x = a; x <= b; x+=i){ printf("%6.2lf|", x); }
	cout << "\n+---+";
	for (double k = a; k <= b; k += i) { cout << "------+"; }
	cout << "\n| y |";
	for (double x = a; x <= b; x += i) { printf("%6.2lf|", x*x); }
	cout << "\n-----";
	for (double k = a; k <= b; k += i) { cout << "-------"; }
	cout << '\n';
}


int main()
{
	t6(-2, 2, 0.5);
}