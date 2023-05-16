#include <iostream>
using namespace std;

/*Задача 1. 09.05. int mystrcmp (const char * str1,const char * str2); —
функція порівнює два рядки, та, якщо рядки рівні,
повертає 0, якщо перший рядок є більшим за другий,
то повертає 1, інакше -1.*/
int mystrcmp(const char* str1, const char* str2);

/*Задача 6. 09.05. char * mystrrev (char * str); — функція реверсує рядок
і повертає покажчик на новий рядок.*/
char* mystrrev(char* str);

/*Задача 1. 09.05(2 дз)
Знайдіть і замініть входження деякого слова на задане
користувачем слово;*/
int main()
{
    char* str = new char[150];
    cout << "Type line: ";
    fgets(str, 150, stdin);

    const char* word = "world";
    cout << strstr(str, word);


}
int mystrcmp(const char* str1, const char* str2) {
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    if (l1 == l2)
    {
        return 0;
    }
}
/*char* mystrrev(char* str) {
    char* reverse = new char[strlen(str)];
    for (int i = strlen(str)-1, i2 = 0; i >= 0; i--, i2++)
    {
        reverse[i2] = str[i];
    }
}*/