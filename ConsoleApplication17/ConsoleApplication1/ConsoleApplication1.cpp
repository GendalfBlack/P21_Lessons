#include <iostream>
using namespace std;

// ������ ������� - �� ����� ������� ���� ����� ��������� ������� ���, ��� �� ��� ���������
// ������� ������ ���������� ����-���� ��� �����

template <typename T>  // � ������� ������������� ���� ����-���� ��� ����� � �� ����
T add(T a, T b) {
    return a + b;
}

template <typename T, typename T2> // � ������� ������������� ��� ����� �1 �� ��� �2 � ������� ����
double add(T a, T2 b) {
    return a + b;
}

int main()
{
    cout << add('c', 1);
}
