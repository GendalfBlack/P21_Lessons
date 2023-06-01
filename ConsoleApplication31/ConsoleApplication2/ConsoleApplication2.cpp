#include <iostream>
#include <Windows.h>
using namespace std;
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
/*
* ������.
* 
* ������ 1. �������� ���������, �� ���������� ���������� ��� ���� ������� ����. ��������� ��
* ��������: ������� �� ����� �� ����� �� �����, ����� �������, �� ������ �� ����������������.
*
* ������ 2. �������� �������, �� ������ ��������� � ���������� ������ �� �������� �� ����� � ����� ���� 
* ��������� ���� �������������� ����, ������ �� ��������������� �������� � ��������.
* 
* ������ 3. �������� ��������, �� ������� ����� �������� ����� � ����� ������ ������� MxN �� ��������� ��� 
* ����� ��������� ������� � ����� ������ � ������� ��� �� �����.
* 
* ������ 4. �������� �������, �� ������ ����� �������� � ������ ������, ���� ������ �� ��������� �� ������ 
* ������ � � 30% ������ ����� ��������� ����, ��������� �� ���� ���� ��� nullptr, ��� ���� "������" � ������
* ����� �� ����� � ����.
* 
* ������ 5. �������� �������, �� ������ ����� �������� � ������ ������, ���� ������ �� ������ ��� ������ ������
* �������� ��: ���� �� ������ �� ���������� ����� � ����� ����� �� �������� (������ ��������, ��� ����
* � ������ ������, �� ���� �������� ���� �� 1 ������� ������������� ����� �� ���� � ����� �� ���� ��������
* ������ �� �� ����� ���� ������ �������.)
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
    int N, M; // N - ���������(������), M - �����(������)
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