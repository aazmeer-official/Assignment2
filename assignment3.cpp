#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Please enter the value : ";
    cin >> count;
    int part = count / 4;
    int remaining = count % 4;
    int part_U = part, part_l = part, part_MU = part, part_ML = part;
    if (count % 2 != 0)
    {
        count = count - 1;
        part_MU += 1;
    }

    if (remaining)
    {
        remaining /= 2;
        part_U += remaining;
        part_l += remaining;
    }
    // cout << count << " " << part << " " << remaining << " " << endl
    //  << part_U << " " << part_l << " " << part_MU << " " << part_ML;
    int count_U_spaces = (count * 1.5) / 2 - part_U + 1;
    for (int i = 0; i < part_U; i++)
    {
        for (int l = 1; l < count_U_spaces; l++)
        {
            cout << " ";
        }

        for (int k = part_U; k > i; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // MU
    int part_MU_R = 1.5 * count;
    for (int i = 0; i < part_MU; i++)
    {

        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < part_MU_R; j++)
        {
            cout << "*";
        }
        part_MU_R -= 2;
        cout << endl;
    }

    // ML
    int part_ML_R = (count * 1.5) - (2 * part_ML) + 2;
    // cout << part_MU_R + 2 << " " << part_ML_R;

    for (int i = 0; i < part_ML; i++)
    {

        for (int k = part_ML; k > i; k--)
        {
            cout << " ";
        }

        for (int j = 0; j < part_ML_R; j++)
        {
            cout << "*";
        }
        part_ML_R += 2;
        cout << endl;
    }

    // // DOWN
    int x = part_l - 1;
    for (int i = 0; i < part_l; i++)
    {
        for (int l = 1; l < count_U_spaces; l++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * x) + 1; j++)
        {
            cout << "*";
        }
        x--;

        cout << endl;
    }

    return 0;
}