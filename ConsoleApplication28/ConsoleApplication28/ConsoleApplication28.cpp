#include <iostream>
using namespace std;

/*
Знайдіть і замініть входження деякого слова на задане
користувачем слово
*/

void changeWord(const char* str, const char* word_original, const char* word_new) {
    char* new_str = new char[100];
    const char* px = nullptr;
    for (const char* i = str; *i != '\0'; i++)
    {
        bool a = false;
        const char* k = i;
        for (const char* j = word_original; *j != '\0'; j++, k++)
        {  
            if (*k != *j) { break; }
            if (*k == *j && j - word_original-1 == strlen(word_original)) { a = true; }
        }
        if (a)
        {
            px = i;
            break;
        }
    }
    char* pos = new_str;
    for (const char* i = str; i != px; i++, pos++) { *pos = *i; }
    for (const char* i = word_new; *i != '\0'; i++, pos++) { *pos = *i; }
    for (const char* i = px+strlen(word_original); *i != '\0'; i++, pos++) { *pos = *i; }
    cout << new_str;
}

int main()
{
    char* str = new char[100];
    char* word_o = new char[100]; 
    char* word_n = new char[100];
    cout << "Text:";
    fgets(str, 100, stdin);
    cout << "Word1:";
    fgets(word_o, 100, stdin);
    cout << "Word2:";
    fgets(word_n, 100, stdin);
    changeWord(str, word_o, word_n);
}
