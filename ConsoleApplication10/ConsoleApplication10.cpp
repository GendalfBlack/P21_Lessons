#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    /*
   ������ 1. �������� ��������, ��� ������� ������������ ������ ���������� ����� n,
   � ���� ����� ����� n ������� �����, �������������� ���� ���� while.
   */
   /*
   ������ 2. �������� ��������, ��� ������� ������������ ������ ���������� ����� n,
   � ���� ����� ������������ Գ������� �� n-�� �����, �������������� ���� ���� for.
   */
   /*
   ������ 3. �������� ��������, ��� ������� ������������ ������ ���������� ����� n,
   � ���� ����� ��������� �� ������� � n �����, ��� n-� ����� ��������� � �����
   �� n �� 1. ���������, ���� n ������� 5, ����� �� ��������� ���:

   5
   4 5
   3 4 5
   2 3 4 5
   1 2 3 4 5
   */   
   /*
   ������ 4. �������� ��������, ��� ��������� ������������ ������ ���������� ����� n,
   � ���� �������� ����� �����, �������������� ������ � n �������. ���������,
   ���� n ������� 5, ��������� �� ��������� ���:

     *
    * *
   *   *
    * *
     *
     
     */
    

     /*
   �������� ��������, ��� ������� ������������ ������ ���������� ����� n, � ����
   ����� ����� ������, �������������� ������ � n �������. ���������, ���� n ������� 5,
   ��������� �� ��������� ���:

       *
      ***
     *****
    *******
   *********

   */
    int n;
    cout << "������ ������� ������� �����: ";
    cin >> n;
    int space = n -1;
    int stars = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < space; j++) { cout << ' '; }
        for (int j = 0; j < stars; j++) { cout << '*'; }
            space--;
            stars += 2;
        cout << '\n';
    }
}
