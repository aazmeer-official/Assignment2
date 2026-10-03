#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int swapping = 0; swapping < n; swapping++)
    {
        int start_sorting = 0, end_sorting = n - swapping - 1;
        while (start_sorting < end_sorting)
        {
            if (arr[start_sorting] > arr[end_sorting])
            {
                swap(arr[start_sorting], arr[end_sorting]);
            }
            start_sorting++;
        }
    }
    return 0;
}