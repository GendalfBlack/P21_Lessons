#include <iostream>
using namespace std;
int main()
{
    float f = 123.123123;
    //cout << f;
    printf("%.2f\n", f); // %.2f -> ������� ����� 2 ����� ϲ��� ���� � ����� float
    float f2 = 123.1;
    printf("%.2f\n", f2);

    int a = 100, b = 1, c = 1000;
    printf("%4d\n%4d\n%4d\n", a, b, c); // %4d -> ������� ����� � ���� � 4� �������
    // ���� ���� ������� ����� �� �����(�� ���������) �� ����� ���� ����������
    // cout << " " << a  << '\n << "   " << b << '\n << c << '\n <<;
}
