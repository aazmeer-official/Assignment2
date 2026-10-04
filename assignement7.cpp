#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[1000] = {};
    for (int i = 0; i < n; i++)
    {
        // cout << arr[i] << " ";
        int prev = i - 2;
        int next = i + 2;
        if (next >= n)
        {
            next = next % n;
        }
        if (prev < 0)
        {
            prev = n + prev;
        }
        arr2[i] = arr[prev] * arr[next];
        // cout << arr[prev] << " " << arr[i] << " " << arr[next] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr2[i];
    }

    // Printing values
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";

    return 0;
}