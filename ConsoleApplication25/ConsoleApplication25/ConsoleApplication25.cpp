#include <iostream>
using namespace std;

/*Рядки - масив символів, що зберігає послідовність літер/цифр/символів
яка утворює рядок.
Будь-який рядок має фіксований розмір, що обмежує кількість символів
що може знаходитись в цьому рядку. 

Показчики займають місце в пам'яті відповідно моделі пам'яті в якій вони
працюють. Показчики 
які були створені в програмі x86,x32 -> 4B (32bit)
які були створені в програмі x64 -> 8B (64bit)
*/

int strlrn(char* arr) { // strlen(const char* arr) -> вбудований аналог функції
    if (arr == nullptr) { return -1; }
    int l = 0;
    while (arr[l] != '\0') {
        l++;
    }
    return l;
}

// char* strcat(char* s1, char* s2) -> повертає показчик на новий рядок що об'єднує s1 та s2
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
// char* strcat(char* s1, char* s2) -> повертає показчик на новий рядок що об'єднує s1 та s2
// але з s2 буде записано не більше n символів
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

// char* strcpy(char* TO, char* FROM) -> копіює в показчик TO, символи з показчика FROM
// char* strncpy(char* TO, char* FROM, int n) -> копіює певну кількість символів (n)
//                                               в показчик TO, символи з показчика FROM

// int strcmp(char* s1, char* s2) -> повертає 1, якщо рядки s1 та s2 повністю співпадають
//                                   повертає 0, якщо не співпадають (регистроНЕчутливо)
// int _stricmp(char* s1, char* s2)->повертає 1, якщо рядки s1 та s2 повністю співпадають
//                                   повертає 0, якщо не співпадають (регистрочутливо)
int main()
{
    /* {
        char word[] = "Hello"; // СТАТИЧНИЙ МАСИВ СИМВОЛІВ
        cout << word;       // вивести все слово
        cout << word[1];    // вивести одну букву
        // word = "World"; 
    }*/
    char* word = new char[50];
    fgets(word, 50, stdin); // показчик на рядок, розмір цього рядка, буфер вводу(до Enter)
    cout << word;
}