#include <iostream>
using namespace std;

int main()
{
    cout << "Please Enter the size of array : ";
    int n;
    cin >> n;
    int arr[1000] = {};
    cout << "Please Enter the values of ARRAY : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr2[1000] = {};
    int arr3[1000] = {};
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    x -= 1;
    int start = 0, end = k;
    while (end <= n)
    {
        int start2 = start;
        while (start2 < end)
        {
            for (int i = 0; i < k; i++)
            {
                arr2[i] = arr[start2];
                start2++;
            }
            for (int swapping = 0; swapping < k; swapping++)
            {
                int start_sorting = 0, end_sorting = k - swapping - 1;
                while (start_sorting < end_sorting)
                {
                    if (arr2[start_sorting] > arr2[end_sorting])
                    {
                        swap(arr2[start_sorting], arr2[end_sorting]);
                    }
                    start_sorting++;
                }
            }
            // For Printing Windows

            // cout << "[";
            // for (int j = 0; j < k; j++)
            // {
            //     cout << arr2[j] << " ";
            // }
            // cout << "]";

            if (x >= k || arr2[x] >= 0)
            {
                arr2[x] = 0;
            }
            arr3[start] = arr2[x];
        }
        // cout << endl;
        start++;
        end++;
    }
    cout << "[";
    for (int i = 0; i < n - k + 1; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << "]";
    return 0;
}