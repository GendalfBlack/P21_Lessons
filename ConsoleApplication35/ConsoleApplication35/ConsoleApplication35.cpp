#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
using namespace std;

const char* path = "Z:/PKO/C++/p21/ConsoleApplication35/ConsoleApplication35/File1.bin";

ofstream out;
ifstream in;

int main()
{
    int N, M;
    cin >> N >> M;
    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[M];
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 10 + 1;
        }
    }
    out.open(path, ofstream::out); // відкриваєм файл в режимі текстового запису
    char* str_N = new char[3]; // створюємо пустий рядок для кількості рядків
    str_N = _itoa(N, str_N, 10); // записуємо в пустий рядок число N переводячи його в текст(символи)
    out.write(str_N, 3); // записуємо рядок у файл
    char* str_M = new char[3]; // створюємо пустий рядок для кількості стовпців
    str_M = _itoa(M, str_M, 10); // записуємо в пустий рядок число M переводячи його в текст(символи)
    out.write(str_M, 3); // записуємо рядок у файл

    char* number = new char[2]; // створюємо пустий рядок для кожного числа
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            number = _itoa(arr[i][j], number, 10); // записуємо в пустий рядок число arr[i][j] переводячи його в текст(символи)
            out.write(number, 2); // записуємо рядок у файл
        }
    }
    out.close();

    int n2, m2;
    in.open(path, ifstream::in);
    char* str_n2 = new char[3]; // створення пустого рядка для читання розмірів масива(к-ість рядків)
    in.read(str_n2, 3); // читання у пустий рядок з файлу
    n2 = atoi(str_n2); // конвертація рядка в число за допомогою функції atoi
    char* str_m2 = new char[3]; // створення пустого рядка для читання розмірів масива(к-ість стовпців)
    in.read(str_m2, 3);
    m2 = atoi(str_m2);
    cout << n2 << ' ' << m2 << '\n';

    int** arr2 = new int*[n2]; 
    for (int i = 0; i < n2; i++) { arr2[i] = new int[m2]; } // новий массив знайдених розмірів за допомогою n2, m2
    int sum = 0; // майбутня сума
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            char* number = new char[2]; // створення пустого рядка для майбутнього одного числа з масива
            in.read(number, 2); // читання одного числа з файлу в пустий рядок
            arr2[i][j] = atoi(number); // конвертація рядка в число і запис одразу в новий масив у відповідне місце
            sum += arr2[i][j]; // знаходження суми
            cout << arr2[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << "sum: " << sum;
}
