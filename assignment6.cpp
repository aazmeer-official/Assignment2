#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 3, 4, 2, 3, 3, 8, 7, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[1000] = {};
    int min = arr[0];
    int max = arr[0];
    // For finding min and max
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    // For finding the frequency
    for (int i = min; i <= max; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
            arr2[i] = count;
        }
    }

    // Finding the max index
    int counter = 0;
    for (int k = 0; k <= max; k++)
    {
        int idx = 0;
        for (int i = 0; i <= max; i++)
        {
            for (int j = i + 1; j <= max; j++)
            {
                if (arr2[j] > arr2[idx])
                {
                    idx = j;
                }
            }
        }
        int value = arr2[idx];

        for (int l = 0; l < value; l++)
        {
            arr[counter] = idx;
            counter++;
        }

        arr2[idx] = 0;
    }

    // Frequency Sorted Array

    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]";
    return 0;
}