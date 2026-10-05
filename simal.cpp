#include <iostream>
using namespace std;

int main()
{
    int N = 9;
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            int n = N, start = 1, r = row, c = col;
            int value;

            // Making the box small
            while (r > 0 && c > 0 && r < n - 1 && c < n - 1)
            {
                start = start + 4 * n - 4;
                n = n - 2;
                r--;
                c--;
            }

            // TOP
            if (r == 0)
            {
                value = start + c;
            }

            // Left
            else if (c == 0)
            {
                value = 4 * n - r - 3 + (start - 1);
            }

            // Right
            else if (c == n - 1)
            {
                value = (n - 1) + r + start;
            }
            // Bottom
            else if (r = n - 1)
            {
                value = (start - 1) + 3 * n - 2 - c;
            }
            if (value < N)
            {
                cout << value << "  ";
            }
            else
            {
                cout << value << " ";
            }
        }
        cout << endl;
    }

    return 0;
}