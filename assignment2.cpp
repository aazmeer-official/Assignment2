#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number : ";
    int rows;
    cin >> rows;
    int spaces = rows;
    for (int row = 1; row <= rows; row++)
    {
        for (int num = 1; num <= row; num++)
        {
            for (int space_no = 1; space_no <= spaces; space_no++)
            {
                cout << " ";
            }
            cout << num;
        }
        spaces--;
        cout << endl;
    }

    return 0;
}