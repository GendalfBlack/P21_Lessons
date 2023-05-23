#include <iostream>
using namespace std;

// Задача 3. Створити структуру що зберігає координати точки на площині та
// написати функцію що приймає дві точки і повертає нецілу відстань між точками.

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
}

int main()
{
    Point a, b;
    cin >> a.x;
    cin >> a.y;
    cin >> b.x;
    cin >> b.y;

    cout << distance(a, b);
}
