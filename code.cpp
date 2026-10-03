#include <iostream>
using namespace std;
// Reverse an array
int main()
{
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arr2[6];
    int start = 0;
    int end = n - 1;
    while (start < n)
    {
        arr2[end] = arr[start];
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}