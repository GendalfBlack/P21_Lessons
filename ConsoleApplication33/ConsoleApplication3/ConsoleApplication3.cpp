#include <iostream>
using namespace std;
const char* path = "Z:/PKO/C++/p21/ConsoleApplication33/ConsoleApplication33/MyFile4.txt";
FILE* out;
FILE* in;
struct Student {
	char* name;
	char* last_name;
	char* second_last_name;
	int age;
}*students;
/*
   Задача 1. Створити структуру що зберігає Прізвище, Ім'я та По-
   бітькові студента, а також його вік. Написати програму, що
   дозволяє заповнити масив структур певною(вказаною користувачем)
   кількістю студентів а потім по черзі записує їх всіх у файл.

   Задача 2. Створити масив з випадкових цілих чисел та переписати його в 
   файл. Після чого створити програму що прочитає з файлу всі числа та порахує
   суму всіх чисел і виведе її на екран.

   Задача 3. Створити стурктуру що зберігає дату (число місяць рік) та написати 
   програму що записує одне слово та дату по черзі в файл(в форматі date:word).
   Прочитати та вивести всі дані з файлу на екран.
   
   */
int main()
{
	int n;
	cin >> n;
	// щоб працювали наступні gets для рядків треба звільнити буфер введення користувача
	cin.ignore(); // знищує останній символ переноса рядка та іншу інформацію, що
				  // залишилась після введення користувачем
	students = new Student[n];
	
	for (int i = 0; i < n; i++)
	{
		// якщо ми хочемо записати або використати поле зі структури, або класу
		// в звичайному випадку ми пишемо "." - оператор доступу до змінних 
		// класу/структури
		// "->" - оператор доступу до зміних класу/структури, який вказаний через
		// показчик
		char name[50];
		fgets(name, 50, stdin);
		for (int j = 0; j < 50; j++)
		{
			if (name[j] == '\n')
			{
				name[j] = '\0';
			}
		}
		students[i].name = name;
		
		char last_name[50];
		fgets(last_name, 50, stdin);
		for (int j = 0; j < 50; j++)
		{
			if (last_name[j] == '\n')
			{
				last_name[j] = '\0';
			}
		}
		students[i].last_name = last_name;

		char second_last_name[50];
		fgets(second_last_name, 50, stdin);
		for (int j = 0; j < 50; j++)
		{
			if (second_last_name[j] == '\n')
			{
				second_last_name[j] = '\0';
			}
		}
		students[i].second_last_name = second_last_name;

		int age;
		cin >> age;
		cin.ignore();
		students[i].age = age;
	}
	if (fopen_s(&out, path, "w") == NULL)
	{
		for (int i = 0; i < n; i++)
		{
			fprintf_s(out, "%s %s %s, %d\n", students[i].name, students[i].last_name,
				students[i].second_last_name, students[i].age);
		}
		fclose(out);
	}
}
