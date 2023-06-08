#include <iostream>

using namespace std;
const char* path = "Z:/PKO/C++/p21/ConsoleApplication33/ConsoleApplication33/MyFile5.txt";
FILE* out;
FILE* in;
/*
   Задача 3. Створити стурктуру що зберігає дату (число місяць рік) та написати 
   програму що записує одне слово та дату по черзі в файл(в форматі date:word).
   Прочитати та вивести всі дані з файлу на екран.
*/

struct date {
    int day;
    int month;
    int year;
};
int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    cin.ignore();
    date d_1 = { d,m,y };
    char word[50];
    fgets(word, 50, stdin);

    if (fopen_s(&out, path, "w") == NULL) {
        fprintf_s(out, "%d.%d.%d:%s", d_1.day, d_1.month, d_1.year, word);
        fclose(out);
    }
    if (fopen_s(&in, path, "r") == NULL)
    {
        while (!feof(in))
        {
            char* s = new char;
            date d_2 = { 0,0,0 };
            int* d_ = new int;
            fscanf_s(in, "%d", d_);
            d_2.day = *d_;
            fscanf_s(in, "%c", s);

            int* m_ = new int;
            fscanf_s(in, "%d", m_);
            d_2.month = *m_;
            fscanf_s(in, "%c", s);

            int* y_ = new int;
            fscanf_s(in, "%d", y_);
            d_2.year = *y_;
            fscanf_s(in, "%c", s);

            char word[50];
            int i =0;
            while (true) {
                fscanf_s(in, "%c", s);
                if (*s != '\n' && *s != '\0' && !feof(in))
                {
                    word[i] = *s;
                }
                else {
                    break;
                }
                i++;
            }
            word[i] = '\0';
            cout << d_2.day << '.' << d_2.month << '.' << d_2.year << ':' << word;
            fscanf_s(in, "%c", s);
            if (*s == 26) {
                break;
            }
        }
        fclose(in);
    }
}