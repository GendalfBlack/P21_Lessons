#include <iostream>
using namespace std;
// Об'єднання, перелічувальні типи, показчики на структури, робота над структурами.
// union - об'єднання, це спеціальний тип даних, що створюється користувачем, задля економії
//         місця. об'єднання зберігає інформацію довжиною в НАЙБІЛЬШИЙ з його членів
union GroupNumber{
    const char* name;          // 8B 64bit
    unsigned short number;     // 2B 16bit
};

struct Student {
    char name[50];
    char lastname[50];
    unsigned char age;
    GroupNumber group;
};

int main()
{
    Student s1 = { "Bitalik", "3akusilo", 15};
    s1.group.name = "P22";
    Student s2 = { "Kucher", "Kateryna", 11};
    s2.group.number = 3211;

    cout << s1.name<< endl; 
    cout << s1.lastname << endl;
    cout << (int)s1.age << endl;
    cout << s1.group.name << endl;
    cout << endl;
    cout << s2.name << endl;
    cout << s2.lastname << endl;
    cout << (int)s2.age << endl;
    cout << s2.group.number << endl;
}
