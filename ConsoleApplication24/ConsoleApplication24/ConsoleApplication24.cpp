#include <iostream>
using namespace std;


/*remove(int pos): видаляє ціле число в позиції pos з масиву*/

void remove(int*&arr, int & n, int pos) {
    if (pos < 0 || pos >= n)
    {
        cout << "Error pos out of bounds";
    }
    int* arr2 = new int[n - 1];
    for (int i = 0, i2 = 0; i < n; i++)
    {
        if (i != pos)
        {
            arr2[i2] = arr[i];
            i2++;
        }
    }
    delete[] arr;
    arr = arr2;
    n--;
}
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) { cin >> arr[i]; }

    int index;
    cin >> index;
    remove(arr, n, index);
    cout << endl;
    for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
}