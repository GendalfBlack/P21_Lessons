/* ���� 40. ��������� */
#include <iostream>
using namespace std;

void add(int* px) {
    *px = *px + 1;
   //x = x + 1;
    // * -> ������� �������� ������������
    // *a -> ����������� ����� "�", ("�" �� ��������)
    // ��������� 䳿 "*px" �� ����� "x" � ����� ���� ������ ���� ����
    // � �� ����
}

int main()
{
    // �������� - �� �����, ��� ������ �������� ������
    // ������ � ���'�� ��� ���� ����. ���� ��������
    // ������ ���� � ���'��. (������� ��� �����)
    
    int x = 10;
    int* px = &x; // px - �� �������� �� ������ ���� � ���'��
                  // ������ ����� �
    // & -> ������� �������� ������ ������
    // &a -> ����� ������ �� ����� "a"
    // + -> ������� �������� ����
    // a+b -> ���������� ����� "a" �� "b"
    
    add(px);
    cout << x;
}
