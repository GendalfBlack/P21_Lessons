/* ���� 40. ����� ������ ����� 39*/
#include <iostream>
using namespace std;

/* ������ 2. �������� ���������� ��������� ����� ������� �����.
   ��������� ���� �� ��������:
   ������ ������ ������� "����� �����. ����� ���������"
   ��������� ������� � 4 ����� � 7 ��������� ���� ������� ������ 3.6
   ������� �� ����� �� ��������� �������
*/

void printMDA(double** arr, int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%1.1lf ", arr[i][j]);
        }
        cout << '\n';
    }
}

int main()
{
    int n, m;
    cin >> m >> n;
    double** arr = new double*[m];
    for (int i = 0; i < m; i++) { arr[i] = new double[n]; } /* �������� ����� */

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j / 10.0;
        }
    }
    printMDA(arr, m, n);
}