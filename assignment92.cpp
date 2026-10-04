#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 4, 5, 2};
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        arr[0] ^= arr[i];
    }
    cout << arr[0];
    return 0;
}