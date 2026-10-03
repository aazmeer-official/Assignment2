#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {5, 3, 8, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Binary Search Algo
    int start = 0, end = n - 1;
    int key = 9;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "The index is : " << mid;
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            // cout << start;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            // cout << end;
        }
        else
        {
            cout << -1;
        }
    }
    return 0;
}