#include <iostream>
using namespace std; 

enum { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

const char* weekdays[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

struct Date {
    unsigned char WeekDay : 3;      // інформація зберігається в ПОЛІ з трьох БІТІВ 
    unsigned char Day : 5;          // інформація зберігається в ПОЛІ з п'яти БІТІВ 
    unsigned char Month : 4;        // інформація зберігається в ПОЛІ з чотирьох БІТІВ 
    unsigned short Year : 12;       // інформація зберігається в ПОЛІ з дванадцяти БІТІВ
                                    // сумарно 24 біта, програма автоматично доставить до 32 бітів
};


int main()
{
    Date d = { TUE, 30, 5, 2023 };
    
    cout << weekdays[d.WeekDay - 1] << (int)d.Day << '.' << (int)d.Month << '.' << d.Year << endl;

    cout << sizeof(Date);
}
