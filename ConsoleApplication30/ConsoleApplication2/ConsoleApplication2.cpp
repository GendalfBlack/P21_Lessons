#include <iostream>
#include <Windows.h>
using namespace std;
//перелічувальні типи - спеціальний тип створення числових змінних, що мають загальне використання 
                     // в програмі, частіше за все використовуються для збільшення читаємості коду
                     // та зручної роботи


// Задача 1. Попросити користувача ввести дату в структуру "Дата". Написавши день, 
// обравши місяць та написавши рік.

enum {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OKT, NOV, DEC };

const char* month[12] = { "січень" , "лютий" , "березень" , "квітень", "травень",  "червень", "липень","серпень" , "вересень", "жовтень", "листопад", "грудень" };

struct Date {    int day;    int month;    int year;};
void print(Date d) { printf("%d.%d.%d", d.day, d.month, d.year); }
void print2(Date d) { printf("%d %s %d", d.day, month[d.month - 1], d.year); }
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Date d;
    cout << "Напишіть день:";    cin >> d.day;
    cout << "Виберіть місяць:\n1.Січень\n2.Лютий\n3.Березень\n4.Квітень\n5.Травень\n6.Червень\n7.Липень\n8.Серпень\n9.Вересень\n10.Жовтень\n11.Листопад\n12.Грудень\n";
    cin >> d.month;
    cout << "Напишіть рік:";    cin >> d.year;
    print2(d);
    cout << endl << month[JAN];
}
