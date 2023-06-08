#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream> 
using namespace std;

const char* path = "Z:/PKO/C++/p21/ConsoleApplication34/FILE3.bin";

ofstream out; // клас що дозволяє писать в файл (out file stream)
ifstream in;  // клас що дозволяє читати з файлу (in file stream)
int main()
{
    char name[50]; // рядок що пише користувач на початку нашої програми
    fgets(name, 50, stdin); // функція що записує з консолі в змінну рядка, без '/0'

    out.open(path, ofstream::out | ios::binary); // відкриття файлу
    int size = strlen(name);// визначення довжини рядка для запису тільки необхідної інформації
    char* size_text = new char[3]; // створення рядка, що буде зберігати розмір рядка що треба записати(число в текстовом форматі)
    _itoa(size, size_text, 10); // функція що перетворює число на рядок, для неї треба додати в самом початку файлу
                                                                        //#define _CRT_SECURE_NO_WARNINGS 1
    out.write(size_text, 3); // запис розміру рядка в текстовій формі перед самим рядком що ми хотіли записати
    out.write(name, size); // запис самого рядка відповідного необхідного розміру(не записується зайвих 50 - strlen() символів)
    out.close(); // завершення запису

    char* new_name; // новий рядок для зчитування з файлу
    in.open(path, ifstream::in | ios::binary); // відкриття файлу
    char* size_text_ = new char[3]; // новий рядок для зчитування текстової форми довжини рядка що треба зчитати
    in.read(size_text_, 3); // зчитування і запам'ятовування текстової форми довжини рядка
    int size_ = atoi(size_text); // функція що конвертує текстову форму назад в число
    new_name = new char[size_+1]; // виділення пам'яті рівно на скільки йде рядок в файлі + 1 для '\0' в кінці рядка
    in.read(new_name, size_); // зчитування необхідних символів з файлу в новий рядок
    new_name[size_] = '\0'; // додавання в кінці рядка '\0'
    in.close(); // закриття файлу

    cout << new_name; // виведення результату прочитання рядка з файлу
}
