#include <iostream>
using namespace std; 

enum { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

const char* weekdays[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

struct Date {
    unsigned char WeekDay : 3;      // ���������� ���������� � ��˲ � ����� ��Ҳ� 
    unsigned char Day : 5;          // ���������� ���������� � ��˲ � �'��� ��Ҳ� 
    unsigned char Month : 4;        // ���������� ���������� � ��˲ � �������� ��Ҳ� 
    unsigned short Year : 12;       // ���������� ���������� � ��˲ � ���������� ��Ҳ�
                                    // ������� 24 ���, �������� ����������� ��������� �� 32 ���
};


int main()
{
    Date d = { TUE, 30, 5, 2023 };
    
    cout << weekdays[d.WeekDay - 1] << (int)d.Day << '.' << (int)d.Month << '.' << d.Year << endl;

    cout << sizeof(Date);
}
