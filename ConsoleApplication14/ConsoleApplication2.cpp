#include <iostream>
#include <Windows.h>
using namespace std;

// ������� �������� ����� ������� �� ������������ �����������
// ������� �� ������ ���� ��������� �������
// ѳ������� ������� - �� �� ��� �����, �� ����� �� �� ���� ���������

int D(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    return d;
}

// �������� ������ ��'����� ������� � �������
int firstNeg(int arr[10]) {
    int fn = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            fn = arr[i];
            break;
        }
    }
    return fn;
}

int main()
{
    int d = D(5, 2, 1);
    cout << d;
}
