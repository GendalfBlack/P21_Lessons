#include <iostream>
using namespace std;

int* append(int* arr, int x, int n) {
    int* arr2 = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    arr2[n] = x;
    delete(arr);
    return arr2;
}

int main()
{
    int n;
    cout << "type array size: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        printf("type %d element: ", i + 1);
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {  cout << arr[i] << ' '; }

    int x;
    cout << "\ntype new element: ";
    cin >> x;
    arr = append(arr, x, n++);

    for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
}
