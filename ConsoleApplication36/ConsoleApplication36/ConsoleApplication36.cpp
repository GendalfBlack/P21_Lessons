#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <conio.h>
#include <Windows.h>
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
int id = 0;
struct Employe{ int id; char* PIB; char* posada; char* telephone; char* email;}* Employes;
struct Automobile { int id; char* virobnik; int year; char* model; int price; int pot_price; };
struct Date { int day; int month; int year; };
struct Sales { int seller_id; int car_id; Date date;  int real_price; };

void add_Employe() {
    Employe* Employes2 = new Employe[employes_size + 1];
	for (int i = 0; i < employes_size; i++)	{ Employes2[i] = Employes[i]; }
    Employes2[employes_size] = { id, new char[50], new char[20] , new char[15], new char[30] };
    //cin.ignore();
    cout << "Введіть П.І.Б. співробітника: ";
    fgets(Employes2[employes_size].PIB, 50, stdin);
    cout << "Введіть посаду співробітника: ";
    fgets(Employes2[employes_size].posada, 20, stdin);
    cout << "Введіть телефон співробітника: ";
    fgets(Employes2[employes_size].telephone, 15, stdin);
    cout << "Введіть email співробітника: ";
    fgets(Employes2[employes_size].email, 30, stdin);
    id++;
    delete[] Employes;
    Employes = Employes2;
    employes_size++;
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

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int selected = 1;
    char selection;
    while (true)
    {
        if (selected == 1) { cout << "--->"; }
        cout << "\t1. Додати нового співробітника" << endl;
        if (selected == 2) { cout << "--->"; }
        cout << "\t2. Видалити співробітника" << endl;
        if (selected == 3) { cout << "--->"; }
        cout << "\t3. Показати список співробітників" << endl;
        selection = _getch();
        if (selection == 72 && selected > 1) { selected--; }
        else if (selection == 80 && selected < 3) { selected++; }
        else if (selection == 13) {
            switch (selected)
            {
            case 1:
                add_Employe(); break;
            case 2:
                int selection2;
                cout << "Введіть якого співробітника треба видалити: ";
                cin >> selection2;
                delete_Employe(selection2);
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