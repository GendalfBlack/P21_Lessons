#include <iostream>
#include <Windows.h>
using namespace std;

bool DilitsyaNa7(int A) {
    bool answer;
	if (A % 7 == 0)
	{
		answer = true;
	}
	else {
		answer = false;
	}
	return answer;	// return - ����� � ������� ��� ������� ��� ���������� � 
					// ��������� ����������
}

bool DilitsyaNa7_2(int A) {
	return A % 7 == 0;	// return - ����� � ������� ��� ������� ��� ���������� � 
					// ��������� ����������
}
int main()
{
	bool k = DilitsyaNa7(89);
	std::cout << DilitsyaNa7(7);
	std::cout << ' ';
    std::cout << DilitsyaNa7(14);
    std::cout << ' ';
    std::cout << DilitsyaNa7(76);
	std::cout << ' ';
	int x;
	cin >> x;
	std::cout << DilitsyaNa7(x);
}
