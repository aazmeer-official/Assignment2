#include <iostream>
using namespace std;

int main()
{
    int total_size;
    cout << "Please enter the value : ";
    cin >> total_size;
    int quarter = total_size / 4;
    int leftover = total_size % 4;
    int top_rows = quarter, bottom_rows = quarter, mid_upper_rows = quarter, mid_lower_rows = quarter;
    if (total_size % 2 != 0)
    {
        total_size = total_size - 1;
        mid_upper_rows += 1;
    }

    if (leftover)
    {
        leftover /= 2;
        top_rows += leftover;
        bottom_rows += leftover;
    }
    // cout << total_size << " " << quarter << " " << leftover << " " << endl
    //  << top_rows << " " << bottom_rows << " " << mid_upper_rows << " " << mid_lower_rows;
    int top_margin = (total_size * 1.5) / 2 - top_rows + 1;
    for (int top_row = 0; top_row < top_rows; top_row++)
    {
        for (int margin_no = 1; margin_no < top_margin; margin_no++)
        {
            cout << " ";
        }

        for (int gap_no = top_rows; gap_no > top_row; gap_no--)
        {
            cout << " ";
        }

        for (int star_no = 1; star_no <= (2 * top_row) + 1; star_no++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // MU
    int mid_upper_stars = 1.5 * total_size;
    for (int mu_row = 0; mu_row < mid_upper_rows; mu_row++)
    {

        for (int mu_space = 0; mu_space <= mu_row; mu_space++)
        {
            cout << " ";
        }
        for (int mu_star = 0; mu_star < mid_upper_stars; mu_star++)
        {
            cout << "*";
        }
        mid_upper_stars -= 2;
        cout << endl;
    }

    // ML
    int mid_lower_stars = (total_size * 1.5) - (2 * mid_lower_rows) + 2;
    // cout << mid_upper_stars + 2 << " " << mid_lower_stars;

    for (int ml_row = 0; ml_row < mid_lower_rows; ml_row++)
    {

        for (int ml_space = mid_lower_rows; ml_space > ml_row; ml_space--)
        {
            cout << " ";
        }

        for (int ml_star = 0; ml_star < mid_lower_stars; ml_star++)
        {
            cout << "*";
        }
        mid_lower_stars += 2;
        cout << endl;
    }

    // // DOWN
    int bottom_shrink = bottom_rows - 1;
    for (int bottom_row = 0; bottom_row < bottom_rows; bottom_row++)
    {
        for (int bottom_margin_no = 1; bottom_margin_no < top_margin; bottom_margin_no++)
        {
            cout << " ";
        }
        for (int bottom_space = 0; bottom_space <= bottom_row; bottom_space++)
        {
            cout << " ";
        }

        for (int bottom_star = 0; bottom_star < (2 * bottom_shrink) + 1; bottom_star++)
        {
            cout << "*";
        }
        bottom_shrink--;

        cout << endl;
    }

    return 0;
}