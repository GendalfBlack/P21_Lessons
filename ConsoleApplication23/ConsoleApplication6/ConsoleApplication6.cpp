#include <iostream>
using namespace std;

// ������ 3. �������� ������� �� ���� ������ �������� ���� ��������.

void swap_(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 5;
    cout << x << ' ' << y << endl;
    swap_2(x, y);
    cout << x << ' ' << y << endl;
}
