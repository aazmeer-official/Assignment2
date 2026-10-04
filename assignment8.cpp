#include <iostream>
using namespace std;

int main()
{
    int arr[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int row, column;
    do
    {
        cout << "Enter the value of Row : ";
        cin >> row;
    } while (row < 0 || row > 4);
    do
    {
        cout << "Enter the value of Column : ";
        cin >> column;
    } while (column < 0 || column > 4);
    int index = row * 5 + column;
    int value = arr[index];
    int top, bottom, left, right;

    top = value - 5;
    bottom = value + 5;
    right = value + 1;
    left = value - 1;

    // EDGE CASES
    // TOP
    if (value >= 1 && value <= 5)
    {
        top = 0;
    }

    // Right
    if (value % 5 == 0)
    {
        right = 0;
    }

    // Left
    if (value % 5 == 1)
    {
        left = 0;
    }

    // Bottom
    if (value >= 21 && value <= 25)
    {
        bottom = 0;
    }

    // cout << top << " " << left << " " << bottom << " " << right;
    int sum = top + right + left + bottom;
    cout << "Target Id: " << index << endl;
    cout << "Target Value: " << value << endl;
    cout << "Crossectional Values Sum : " << sum;

    return 0;
}