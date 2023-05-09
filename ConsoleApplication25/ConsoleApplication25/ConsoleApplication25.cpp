#include <iostream>
using namespace std;

/*����� - ����� �������, �� ������ ����������� ����/����/�������
��� ������� �����.
����-���� ����� �� ���������� �����, �� ������ ������� �������
�� ���� ����������� � ����� �����. 

��������� �������� ���� � ���'�� �������� ����� ���'�� � ��� ����
��������. ��������� 
�� ���� ������� � ������� x86,x32 -> 4B (32bit)
�� ���� ������� � ������� x64 -> 8B (64bit)
*/

int strlrn(char* arr) { // strlen(const char* arr) -> ���������� ������ �������
    if (arr == nullptr) { return -1; }
    int l = 0;
    while (arr[l] != '\0') {
        l++;
    }
    return l;
}

// char* strcat(char* s1, char* s2) -> ������� �������� �� ����� ����� �� ��'���� s1 �� s2
char* strcrt(char* arr1, char* arr2) { 
    char* arr3 = new char[strlen(arr1) + strlen(arr2)];
    for (int i = 0; i < strlen(arr1); i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < strlen(arr2)+1; i++)
    {
        arr3[i + strlen(arr1)] = arr2[i];
    }
    return arr3;
}
// char* strcat(char* s1, char* s2) -> ������� �������� �� ����� ����� �� ��'���� s1 �� s2
// ��� � s2 ���� �������� �� ����� n �������
char* strncrt(char* arr1, char* arr2, int n) {
    char* arr3 = new char[strlen(arr1) + strlen(arr2)];
    for (int i = 0; i < strlen(arr1); i++)
    {
        arr3[i] = arr1[i];
    }
    int k = 0;
    for (int i = 0; i < strlen(arr2) + 1 && k < n; i++)
    {
        arr3[i + strlen(arr1)] = arr2[i]; k++;
    }
    return arr3;
}

// char* strcpy(char* TO, char* FROM) -> ����� � �������� TO, ������� � ��������� FROM
// char* strncpy(char* TO, char* FROM, int n) -> ����� ����� ������� ������� (n)
//                                               � �������� TO, ������� � ��������� FROM

// int strcmp(char* s1, char* s2) -> ������� 1, ���� ����� s1 �� s2 ������� ����������
//                                   ������� 0, ���� �� ���������� (�����������������)
// int _stricmp(char* s1, char* s2)->������� 1, ���� ����� s1 �� s2 ������� ����������
//                                   ������� 0, ���� �� ���������� (���������������)
int main()
{
    /* {
        char word[] = "Hello"; // ��������� ����� �����˲�
        cout << word;       // ������� ��� �����
        cout << word[1];    // ������� ���� �����
        // word = "World"; 
    }*/
    char* word = new char[50];
    fgets(word, 50, stdin); // �������� �� �����, ����� ����� �����, ����� �����(�� Enter)
    cout << word;
}