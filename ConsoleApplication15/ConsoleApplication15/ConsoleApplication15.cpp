#include <iostream>
using namespace std;
// �������������� �������. ��������� �������

// ��������� ������� - �� ���������� �������� ������� ��� ���������� ��� �������

int diskriminant(int a, int b, int c);
double diskriminant(double a, double b, double c);
double diskriminant(double a, int b, int c);
double diskriminant(int a, double b, int c);
double diskriminant(int a, int b, double c);
double diskriminant(double a, double b, int c);
double diskriminant(int a, double b, double c);
double diskriminant(double a, int b, double c);

// �������������� - �� ����� ��������� ������� � ���������� �������(������������),
// ��� � ������ ���������� (��� ���� ���������� �����, �� ��� ���������)
int main()
{
	cout << diskriminant(2.5, 5, -7);
}

int diskriminant(int a, int b, int c) { return b * b - 4 * a * c; }
double diskriminant(double a, double b, double c) { return b * b - 4 * a * c; }
double diskriminant(double a, int b, int c) { return b * b - 4 * a * c; }
double diskriminant(int a, double b, int c) { return b * b - 4 * a * c; }
double diskriminant(int a, int b, double c) { return b * b - 4 * a * c; }
double diskriminant(double a, double b, int c) { return b * b - 4 * a * c; }
double diskriminant(int a, double b, double c) { return b * b - 4 * a * c; }
double diskriminant(double a, int b, double c) { return b * b - 4 * a * c; }