#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    // float, double
	// char, short, int, long long
	// bool

	// Площа кола
	cout << "Введіть радіус кола: ";
	float r;
	cin >> r;

	float s = 3.1415 * r * r;
	cout << "Площа кола: " << s;

	// Порахувати по теоремі Піфагора по двум катетам гіпотенузу

	cout << "Введіть катет1: ";
	float k;
	cin >> k;
	cout << "Введіть катет2: ";
	float k2;
	cin >> k2;

	float c = pow(k * k + k2 * k2, 0.5);
	//float c = sqrt(k * k + k2 * k2);
	cout << "Гіпотенуза: " << c;
}