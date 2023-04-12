#include <iostream>
using namespace std;

// Шаблон функції - це спосіб задання типів даних аргументів функції так, щоб під час виконання
// функція гнучко підставляла будь-який тип даних

template <typename T>  // у функцію підставляється ОДИН будь-який тип даних у всі місця
T add(T a, T b) {
    return a + b;
}

template <typename T, typename T2> // у функцію підставляється тип даних Т1 та тип Т2 у відповідні місця
double add(T a, T2 b) {
    return a + b;
}

int main()
{
    cout << add('c', 1);
}
