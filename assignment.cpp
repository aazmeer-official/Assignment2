#include <iostream>
using namespace std;

int main()
{

    int count;

    do
    {
        cout << "Please enter the number (odd): ";
        cin >> count;
    } while (count % 2 == 0);

    int count_u = count;
    int half = count / 2;
    int l = 1;
    int spaces_u = 0;
    for (int i = 0; i < half; i++)
    {
        for (int k = 0; k < spaces_u; k++)
        {
            cout << " ";
        }
        spaces_u += 3;

        for (int j = 0; j < count_u; j++)
        {
            if (l < 10)
            {
                cout << l << "  ";
            }
            else
            {
                cout << l << " ";
            }
            l++;
        }
        count_u -= 2;
        cout << endl;
    }

    // DOWN

    int spaces = half * 3;
    int x = 1;
    for (int i = 0; i <= half; i++)
    {

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        spaces -= 3;

        for (int o = 0; o < x; o++)
        {
            if (l < 10)
            {
                cout << l << "  ";
            }
            else
            {
                cout << l << " ";
            }
            l++;
        }
        x = x + 2;

        cout << endl;
    }

    return 0;
}