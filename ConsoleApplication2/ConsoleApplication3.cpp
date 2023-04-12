#include <iostream>
using namespace std;
int main()
{
    float f = 123.123123;
    //cout << f;
    printf("%.2f\n", f); // %.2f -> вивести тільки 2 знака ПІСЛЯ коми у числа float
    float f2 = 123.1;
    printf("%.2f\n", f2);

    int a = 100, b = 1, c = 1000;
    printf("%4d\n%4d\n%4d\n", a, b, c); // %4d -> вивести число в поле з 4х символів
    // якщо поле символів менше ніж число(не поміщається) то розмір поля ігнорується
    // cout << " " << a  << '\n << "   " << b << '\n << c << '\n <<;
}
