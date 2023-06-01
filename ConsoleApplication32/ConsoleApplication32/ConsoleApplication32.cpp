#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <iostream>
using namespace std;

/*
Задача 1. Створити структуру "Фільми". В якій буде "Назва", "рік випуску", "Студія"

Задача 2. Створити масив структур на 5 фільмів.

Задача 3. Реалізувати можливість редагувати один з фільмів за допомогою функції.

Задача 4. Реалізувати можливість виведення усіх фільмів за допомогою функції.

Задача 5. Реалізувати можливість пошуку фільму за назвою.

Задача 6. Реалізувати сортування масиву з 2 задачі по року випуску за допомогою функції.
*/

const int arraySize = 5;

struct Film {
    char name[50];
    char date[15];
    char studio[30];
} films[arraySize] = {
    {"Шрек", "2001", "Summer"},
    {"Сутінки", "2008", "Summit Entertainment"},
    {"Бійцівський клуб", "1999", "20th Century Fox"},
    {"Гаррі Поттер", "2004", "Warner Bros"},
    {"Людина павук", "2002", "Columbia Pictures"}
};

char* getstr(int size) {
    char* new_str = new char[size];
    fgets(new_str, size, stdin);
    for (int i = 0; i < strlen(new_str); i++) {
        if (new_str[i] == '\n') { new_str[i] = '\0'; }
    }
    return new_str;
}
void editFilm(int pos) {
    if (pos < 0 || pos >= arraySize) { return; }
    cout << endl << "Введіть нову назву: " << endl;
    strcpy(films[pos].name, getstr(50));
    cout << "Введіть нову дату випуску: " << endl;
    strcpy(films[pos].date, getstr(15));
    cout << "Введіть нову студію: " << endl;
    strcpy(films[pos].studio, getstr(30));
}
void showFilm(int pos) {
    if (pos < 0 || pos >= arraySize) { return; }
    cout << films[pos].name << ", " << films[pos].date << ", " << films[pos].studio << endl;
}
void showAll() {
    for (int i = 0; i < arraySize; i++) { showFilm(i); }
}
void findByFullName(char name[]) {
    for (int i = 0; i < arraySize; i++) { if (strcmp(films[i].name, name) == 0) { showFilm(i); } }
}
void findByPartialName(char name[]) {
    char* partial = new char[50];
    for (int i = 0; i < arraySize; i++) {
        int size;
        if (strlen(name) > strlen(films[i].name)) { size = strlen(name); }
        else { size = strlen(films[i].name); }

        strncpy(partial, films[i].name, size);
        partial[size] = '\0';
        if (strcmp(partial, name) == 0) { showFilm(i); }
    }
}

int compareStr(char * word1, char * word2) {
    int size; // пошук довжини меншого слова
    if (strlen(word1) > strlen(word2)) { size = strlen(word2); }
    else { size = strlen(word1); }

    for (int i = 0; i < size; i++)
    {
        if (word1[i] > word2[i]) { return 1; }
        else if (word1[i] == word2[i]) { continue; }
        else { return -1; }
    }
    return 0;
}

int compareDate(Film f1, Film f2) {
    return compareStr(f1.date, f2.date);
}
void sortByYear() {
    qsort(films, arraySize, sizeof(Film), (_CoreCrtNonSecureSearchSortCompareFunction)compareDate);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    showAll();
    cout << endl;
    sortByYear();

    showAll();
}
