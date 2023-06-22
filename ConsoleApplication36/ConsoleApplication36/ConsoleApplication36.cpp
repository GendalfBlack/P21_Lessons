#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <conio.h>
using namespace std;
/*Створіть додаток для обліку продажу автомобілів в автосалоні.*/
/*
Додаток має зберігати таку інформацію:
Співробітник: П.І.Б. Посада. Контактний телефон. Email.
Автомобіль: Назва виробника. Рік випуску. Модель. Собівартість. Потенційна ціна продажу.
Продажі: Співробітник. Автомобіль. Дата продажу. Реальна ціна продажу.
*/
/*
Необхідно зберігати таку функціональність:
Додавання та видалення інформації про співробітників. 2/2
Додавання та видалення інформації про автомобілі.
Додавання та видалення інформації про продаж.
Звіти. Дані можуть виводитися на екран або файл, залежно від вибору користувача:
Повна інформація про співробітників фірми.
Повна інформація про автомобілі.
Повна інформація про продаж.
Усі продажі за певну дату.
Усі продажі за певний період часу.
Усі продажі певного співробітника.
Назва автомобіля, що найбільше продається за вказаний період часу.
Інформація про найуспішнішого продавця за вказаний період часу.
Сумарний прибуток за вказаний період часу.
Збереження даних у файл.
Завантаження даних з файлу.
*/
int employes_size = 0;
int automobiles_size = 0;
int id_employe = 0;
int id_automobile = 0;
struct Employe{ int id; char* PIB; char* posada; char* telephone; char* email;}* Employes;
struct Date { int day; int month; int year; };
struct Automobile { int id; char* virobnik; Date date; char* model; int price; int pot_price; }* Automobiles;
struct Sales { int seller_id; int car_id; Date date;  int real_price; };

const char* path = "Z:/PKO/C++/p21/ConsoleApplication36/employes.bin";

ifstream in;
ofstream out;

void trim_Str(char* str) {
    for (char* pos = str; *pos != '\0'; pos++) { if (*pos == '\n') { *pos = '\0'; return; } }
}

void add_Employe() {
    Employe* Employes2 = new Employe[employes_size + 1];
	for (int i = 0; i < employes_size; i++)	{ Employes2[i] = Employes[i]; }
    Employes2[employes_size] = { id_employe, new char[50], new char[20] , new char[15], new char[30] };
    //cin.ignore();
    cout << "Name: ";
    fgets(Employes2[employes_size].PIB, 50, stdin); trim_Str(Employes2[employes_size].PIB);
    cout << "Posada: ";
    fgets(Employes2[employes_size].posada, 20, stdin); trim_Str(Employes2[employes_size].posada);
    cout << "Phone: ";
    fgets(Employes2[employes_size].telephone, 15, stdin); trim_Str(Employes2[employes_size].telephone);
    cout << "Email: ";
    fgets(Employes2[employes_size].email, 30, stdin); trim_Str(Employes2[employes_size].email);
    id_employe++;
    delete[] Employes;
    Employes = Employes2;
    employes_size++;
}

void add_Automobile() {
    Automobile* Automobiles2 = new Automobile[automobiles_size + 1];
    for (int i = 0; i < automobiles_size; i++) { Automobiles2[i] = Automobiles[i]; }
    Date d;
    cout << "Введіть день випуску авто: "; cin >> d.day;
    cout << "Введіть місяць випуску авто: "; cin >> d.month;
    cout << "Введіть рік випуску авто: "; cin >> d.year;
    Automobiles2[automobiles_size] = {id_automobile, new char[50], d , new char[25], 0, 0 };
    cout << "Введіть назву виробника авто: ";
    cin.ignore(); fgets(Automobiles2[automobiles_size].virobnik, 50, stdin);
    cin.ignore(); fgets(Automobiles2[automobiles_size].model, 50, stdin);
    cout << "Введіть ціну авто: "; cin >> Automobiles2[automobiles_size].price;
    cout << "Введіть очікувану ціну авто: "; cin >> Automobiles2[automobiles_size].pot_price;
    id_automobile++;
    delete[] Automobiles;
    Automobiles = Automobiles2;
    automobiles_size++;
}

void delete_Employe(int index) {
    Employe* Employes2 = new Employe[employes_size - 1];
    for (int i = 0; i < index; i++) { Employes2[i] = Employes[i]; }
    for (int i = index + 1; i < employes_size; i++) { Employes2[i - 1] = Employes[i]; }
    delete[] Employes;
    Employes = Employes2;
    employes_size--;
}

void show_Employe(int index) {
    cout << Employes[index].PIB << ' ' << Employes[index].posada << endl;
    cout << Employes[index].telephone << ' ' << Employes[index].email << endl;
}

void write_Int(ofstream& out, int number, int size) {
    char* str = new char[size];
    _itoa(number, str, 10);
    out.write(str, size);
}
void write_SizedStr(ofstream& out, char* str, int size) {
    write_Int(out, strlen(str), size);
    out.write(str, strlen(str));
}

void write_Employes() {
    out.open(path, ofstream::out | ios::binary);
    write_Int(out, employes_size, 3);

    for (int i = 0; i < employes_size; i++)
    {
        write_Int(out, Employes[i].id, 5);
        write_SizedStr(out, Employes[i].PIB, 2);
        write_SizedStr(out, Employes[i].posada, 2);
        write_SizedStr(out, Employes[i].telephone, 2);
        write_SizedStr(out, Employes[i].email, 2);
    }
    cout << "Saved!\n";
    out.close();
}

int read_Int(ifstream& in, int size) {
    char* str = new char[size];
    in.read(str, size);
    return atoi(str);
}

char* read_SizedStr(ifstream& in, int numbers) {
    char* str_size = new char[numbers];
    in.read(str_size, numbers);
    int size = atoi(str_size);
    char* str = new char[size + 1];
    in.read(str, size);
    str[size] = '\0';
    return str;
}

void read_Employes() {
    in.open(path, ifstream::in | ios::binary);
    employes_size = read_Int(in, 3);
    Employes = new Employe[employes_size];
    for (int i = 0; i < employes_size; i++)
    {
        Employes[i].id = read_Int(in, 5);
        Employes[i].PIB = read_SizedStr(in, 2);
        Employes[i].posada = read_SizedStr(in, 2);
        Employes[i].telephone = read_SizedStr(in, 2);
        Employes[i].email = read_SizedStr(in, 2);
    }
    in.close();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int selected = 1;
    char selection;
    read_Employes();
    while (true)
    {
        if (selected == 1) { cout << "--->"; }
        cout << "\t1. Add new" << endl;
        if (selected == 2) { cout << "--->"; }
        cout << "\t2. Remove" << endl;
        if (selected == 3) { cout << "--->"; }
        cout << "\t3. Show all" << endl;
        selection = _getch();
        if (selection == 72 && selected > 1) { selected--; }
        else if (selection == 80 && selected < 3) { selected++; }
        else if (selection == 13) {
            switch (selected)
            {
            case 1:
                add_Employe(); write_Employes(); break;
            case 2:
                int selection2;
                cout << "Delete index: ";
                cin >> selection2;
                delete_Employe(selection2); write_Employes();
                break;
            case 3:
                for (int i = 0; i < employes_size; i++) { show_Employe(i); }
                system("pause");
                break;
            default:
                break;
            }
        }
        system("cls");
    }
}