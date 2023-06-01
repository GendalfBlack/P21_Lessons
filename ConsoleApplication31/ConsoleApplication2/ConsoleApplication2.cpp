#include <iostream>
#include <Windows.h>
using namespace std;
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
/*
* Задачі.
* 
* Задача 1. Створити структуру, що зберігатиме інформацію про один ігровий тайл. Структура має
* зберігати: позицію на екрані по висоті та ширині, номер кольору, та символ що відображатиметься.
*
* Задача 2. Написати функцію, що приймає структуру з попередньої задачі та виводить на екран в певне місце 
* переданий тайл використовуючи колір, символ та місцезнаходження записане в структурі.
* 
* Задача 3. Написати програму, що створює масив структур тайлів з першої задачі розміром MxN та викликати для 
* кожної структури функцію з другої задачі і вивести все на екран.
* 
* Задача 4. Написати функцію, що приймає масив структур з третьої задачі, його розміри та проходить по всьому 
* масиву і з 30% шансом знищує створений тайл, записуючи на його місці або nullptr, або знак "пробілу" в символ
* тайлу на якому є цикл.
* 
* Задача 5. Створити функцію, що приймає масив структур з третьої задачі, його розміри та робить над кожним тайлом
* наступну дію: якщо під тайлом на наступному рядку в масиві нічого не записано (пустий показчик, або тайл
* з знаком пробіла, то тайл рухається вниз на 1 клітинку перезаписуючи собою те місце в масиві що було знайдено
* пустим та на своєму місці залишає пустоту.)
*/

enum {RED=76, GREEN=42, BLUE=25, YELLOW=110};

unsigned char colors[4] = { RED, GREEN, BLUE, YELLOW };
unsigned char symbols[8] = { 0, 1, 2, 3, 4, 5, 6, 10 };
struct tile {
    unsigned char x;
    unsigned char y;
    unsigned char color;
    unsigned char symbol;
};

void draw(tile t) {
    SetConsoleCursorPosition(handle, { t.x, t.y });
    SetConsoleTextAttribute(handle, t.color);
    cout << char(t.symbol+32);
    SetConsoleTextAttribute(handle, 7);
}

void removeRandom(tile** t, int N, int M) {
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            if (rand()%100 < 30)
            {
                t[j][i].color = 7;
                t[j][i].symbol = 0;
            }
        }
    }
}

void dropDown(tile** t, int N, int M) {
    for (int i = M-2; i >= 0; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (t[i+1][j].color == 7 && t[i+1][j].symbol == 0)
            {
                t[i + 1][j].color = t[i][j].color;
                t[i + 1][j].symbol = t[i][j].symbol;
                t[i][j].color = 7;
                t[i][j].symbol = 0;
            }
        }
    }
}

int main()
{
    int N, M; // N - стовпчики(ширина), M - рядки(висота)
    cin >> N >> M;
    tile** tiles = new tile*[M];
    for (int j = 0; j < M; j++)
    {
        tiles[j] = new tile[N];
        for (int i = 0; i < N; i++)
        {
            tiles[j][i].x = i;
            tiles[j][i].y = j;
            tiles[j][i].color = colors[rand() % 4];
            tiles[j][i].symbol = symbols[rand() % 8];
            draw(tiles[j][i]);
        }
    }

    removeRandom(tiles, N, M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            draw(tiles[j][i]);
        }
    }

    int t;
    while (true)
    {
        cin >> t;
        dropDown(tiles, N, M);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                draw(tiles[j][i]);
            }
        }
    }
    
}