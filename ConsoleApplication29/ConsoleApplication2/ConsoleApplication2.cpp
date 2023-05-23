#include <iostream>
#include <Windows.h>
using namespace std;
struct Fraction{    int whole;    int numerator;    int denominator;    double value; /* може збер≥гати данн≥ р≥зних тип≥в*/};
void print(Fraction f) { printf("\n%3c%3d\n%3d%3c\n%3c%3d\n", ' ', f.numerator, f.whole, '-', ' ', f.denominator);}

Fraction add(Fraction a, Fraction b) {
    Fraction c;
    c.whole = a.whole + b.whole + (a.numerator * b.denominator + b.numerator * a.denominator) / (a.denominator * b.denominator);
    c.numerator = (a.numerator * b.denominator + b.numerator * a.denominator) % (a.denominator * b.denominator);
    c.denominator = a.denominator * b.denominator;
    return c;
}

// «адача 2. ¬икористовуючи структуру Fraction. «робити програму, що на виб≥р користувача буде робити 
// арифметичн≥ д≥њ над двома вручну заповненими структурами цих дроб≥в.

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction f1, f2;
    cout << "¬вед≥ть ц≥лу частину першого дробу:";
    cin >> f1.whole;
    cout << "¬вед≥ть чисельник першого дробу:";
    cin >> f1.numerator;
    cout << "¬вед≥ть знаменник першого дробу:";
    cin >> f1.denominator;
    cout << "¬вед≥ть ц≥лу частину другого дробу:";
    cin >> f2.whole;
    cout << "¬вед≥ть чисельник другого дробу:";
    cin >> f2.numerator;
    cout << "¬вед≥ть знаменник другого дробу:";
    cin >> f2.denominator;
    print(f1);
    print(f2);
    Fraction f3 = add(f1, f2);
    print(f3);
}
