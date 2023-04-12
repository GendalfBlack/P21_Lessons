#include <iostream>
using namespace std;

int main()
{
    int* arr = new int[3];

    arr[0] = 28;
    arr[1] = 86425;
    arr[2] = 86425;

    int x = 10;

    int* arr2 = new int[4];
    arr2[0] = arr[0];
    arr2[1] = arr[1];
    arr2[2] = arr[2];
    arr2[3] = x;

    delete(arr); // звільнити пам'ять старого масива
   
}