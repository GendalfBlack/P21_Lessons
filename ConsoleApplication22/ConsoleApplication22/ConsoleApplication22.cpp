#include <iostream>
using namespace std;

/*const у показчиках. доступ до масиву через показчик(арифметика показчиків)*/

/*
Задачі з 18.04
    Завдання 1. Написати функцію, яка приймає масив цілих чисел і його розмір і повертає
    вказівник на найменший елемент масиву.
    Завдання 2. Створіть функцію, яка приймає масив символів і його розмір і повертає
    покажчик на перше входження вказаного символу. Якщо символ не знайдено в масиві,
    поверніть нульовий покажчик.
    Завдання 3. Створіть функцію, яка приймає два покажчики на цілі змінні та міняє
    місцями значення, на які вони вказують. Функція не повинна нічого повертати,
    але повинна змінювати значення в місцях пам’яті, на які вказують вхідні покажчики.
    Завдання 4. Створіть функцію, яка приймає вказівник на масив цілих чисел і його розмір,
    а також повертає суму всіх елементів масиву.
    Завдання 5. Створіть функцію, яка приймає вказівник на рядок і виводить кожен символ
    рядка на новому рядку.
    Задача 6. Створить функцію що приймає показчик на показчик та змінює данні на які вказує
    показчик на який вказує переданий показчик збільшуючи його на 1.
*/

int* f1(int* arr, int n) {
    int index = 0;
    for (int i = 1; i < n; i++) { if (arr[i] < arr[index]) { index = i; } }
    return &arr[index];
}
char* f2(char* arr, int n, char c) { 
    for (int i = 0; i < n; i++) { if (arr[i] == c) { return &(arr[i]); } } return nullptr;
}
void f3(int* a, int* b) { int temp = *a; *a = *b; *b = temp; }
int f4(int* arr, int n) { int sum = 0; for (int i = 0; i < n; i++) { sum += arr[i]; } return sum; }
void f5(char* arr) { int i = 0; while (arr[i] != '\0') { cout << arr[i] << '\n'; i++; } }
void f6(int** p) { **p += 1; }

int main()
{
    int a = 10;
    cout << a << '\n';
    int* pa = &a;
    int** ppa = &pa;
    f6(ppa);
    cout << a << '\n';
}
