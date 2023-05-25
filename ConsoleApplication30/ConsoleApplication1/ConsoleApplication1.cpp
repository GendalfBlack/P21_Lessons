#include <iostream>
using namespace std;

union MultyPerposeNumber {
    char b1;
    short b2;
    int b4;
    long long b8;
    float f4;
    double f8;
};

int main()
{
    MultyPerposeNumber* n = new MultyPerposeNumber[5];

    for (int i = 0; i < 5; i++)
    {
        int s;
        cout << "1. char, 2. short, 3. int, 4. long long";
        cin >> s;
        long long number;
        cin >> number;
        switch (s)
        {
        case 1: n[i].b1 = number; break;
        case 2: n[i].b2 = number; break;
        case 3: n[i].b4 = number; break;
        case 4: n[i].b8 = number; break;
        default: break;
        }
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << (int)n[i].b1 << ' ';
        cout << n[i].b2 << ' ';
        cout << n[i].b4 << ' ';
        cout << n[i].b8 << ' ';
        cout << endl;
    }
}
