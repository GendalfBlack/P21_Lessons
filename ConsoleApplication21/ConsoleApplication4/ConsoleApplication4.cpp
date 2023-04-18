/* Урок 40. Показчики */
#include <iostream>
using namespace std;

// Задача 3. Створити функцію що приймає дві адреси змінних A та B, та записує 
// в обидві змінні найменший з двох значень цих змінних

void lower(int* pA, int* pB) {
	if (*pA > *pB)
	{
		*pA = *pB;
	}
	else {
		*pB = *pA;
	}
}
int main()
{
	int x = 5, y = 10;
	lower(&x, &y);
	cout << x << ' ' << y;
}



