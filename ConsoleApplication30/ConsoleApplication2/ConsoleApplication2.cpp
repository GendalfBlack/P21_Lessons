#include <iostream>
#include <Windows.h>
using namespace std;
//������������ ���� - ����������� ��� ��������� �������� ������, �� ����� �������� ������������ 
                     // � �������, ������ �� ��� ���������������� ��� ��������� �������� ����
                     // �� ������ ������


// ������ 1. ��������� ����������� ������ ���� � ��������� "����". ��������� ����, 
// ������� ����� �� ��������� ��.

enum {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OKT, NOV, DEC };

const char* month[12] = { "�����" , "�����" , "��������" , "������", "�������",  "�������", "������","�������" , "��������", "�������", "��������", "�������" };

struct Date {    int day;    int month;    int year;};
void print(Date d) { printf("%d.%d.%d", d.day, d.month, d.year); }
void print2(Date d) { printf("%d %s %d", d.day, month[d.month - 1], d.year); }
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Date d;
    cout << "�������� ����:";    cin >> d.day;
    cout << "������� �����:\n1.ѳ����\n2.�����\n3.��������\n4.������\n5.�������\n6.�������\n7.������\n8.�������\n9.��������\n10.�������\n11.��������\n12.�������\n";
    cin >> d.month;
    cout << "�������� ��:";    cin >> d.year;
    print2(d);
    cout << endl << month[JAN];
}
