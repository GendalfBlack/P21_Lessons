#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " type array size: ";
    cin >> n;
    // int *    -> �������� �� int (��������� ��� ����� ��� ��������� ������)
    // new      -> �������� �� �������� ������ ���'��� 
    // int[n]   -> �� ��������� ������� �������� ����������� ����
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ' ';
    }
    cout << '\n' << n;
}
