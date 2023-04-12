#include <iostream>
using namespace std; 
int main()
{
    int arr[100] = {};
    int n;
    cout << " type array size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ' ';
    }


}
