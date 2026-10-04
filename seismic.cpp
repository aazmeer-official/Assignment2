#include <iostream>
using namespace std;

int main()
{
    int grid[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int target_row, target_col;
    do
    {
        cout << "Enter the value of Row : ";
        cin >> target_row;
    } while (target_row < 0 || target_row > 4);
    do
    {
        cout << "Enter the value of Column : ";
        cin >> target_col;
    } while (target_col < 0 || target_col > 4);
    int target_id = target_row * 5 + target_col;
    int target_value = grid[target_id];
    int above, below, west, east;

    above = target_value - 5;
    below = target_value + 5;
    east = target_value + 1;
    west = target_value - 1;

    // EDGE CASES
    // TOP
    if (target_value >= 1 && target_value <= 5)
    {
        above = 0;
    }

    // Right
    if (target_value % 5 == 0)
    {
        east = 0;
    }

    // Left
    if (target_value % 5 == 1)
    {
        west = 0;
    }

    // Bottom
    if (target_value >= 21 && target_value <= 25)
    {
        below = 0;
    }

    // cout << above << " " << west << " " << below << " " << east;
    int neighbour_sum = above + east + west + below;
    cout << "Target Id: " << target_id << endl;
    cout << "Target Value: " << target_value << endl;
    cout << "Crossectional Values Sum : " << neighbour_sum;

    return 0;
}