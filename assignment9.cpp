#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < n; j++)
    {
        int counter = 0;
        int value = arr[j];
        for (int i = 0; i < n; i++)
        {
            if (value == arr[i])
            {
                counter++;
            }
        }
        // cout << arr[j] << " " << counter << endl;
        if (counter == 1)
        {
            cout << arr[j];
        }
    }

    return 0;
}