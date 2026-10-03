#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number : ";
    int n;
    cin >> n;
    int x = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            for (int j = 1; j <= x; j++)
            {
                cout << " ";
            }
            cout << k;
        }
        x--;
        cout << endl;
    }

    return 0;
}