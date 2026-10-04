#include <iostream>
using namespace std;

int main()
{
    cout << "Please Enter the size of array : ";
    int size;
    cin >> size;
    int numbers[1000] = {};
    cout << "Please Enter the values of ARRAY : ";
    for (int idx = 0; idx < size; idx++)
    {
        cin >> numbers[idx];
    }

    int window[1000] = {};
    int result[1000] = {};
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    x -= 1;
    int window_start = 0, window_end = k;
    while (window_end <= size)
    {
        int pos = window_start;
        while (pos < window_end)
        {
            for (int copy_idx = 0; copy_idx < k; copy_idx++)
            {
                window[copy_idx] = numbers[pos];
                pos++;
            }
            for (int pass_no = 0; pass_no < k; pass_no++)
            {
                int left = 0, right = k - pass_no - 1;
                while (left < right)
                {
                    if (window[left] > window[right])
                    {
                        swap(window[left], window[right]);
                    }
                    left++;
                }
            }
            // For Printing Windows

            // cout << "[";
            // for (int print_idx = 0; print_idx < k; print_idx++)
            // {
            //     cout << window[print_idx] << " ";
            // }
            // cout << "]";

            if (x >= k || window[x] >= 0)
            {
                window[x] = 0;
            }
            result[window_start] = window[x];
        }
        // cout << endl;
        window_start++;
        window_end++;
    }
    cout << "[";
    for (int out_idx = 0; out_idx < size - k + 1; out_idx++)
    {
        cout << result[out_idx] << " ";
    }
    cout << "]";
    return 0;
}