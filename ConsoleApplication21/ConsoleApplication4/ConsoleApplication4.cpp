/* ���� 40. ��������� */
#include <iostream>
using namespace std;

// ������ 3. �������� ������� �� ������ �� ������ ������ A �� B, �� ������ 
// � ����� ���� ��������� � ���� ������� ��� ������

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



