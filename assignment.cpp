#include <iostream>
using namespace std;

int main()
{

    int base_width;
    do
    {
        cout << "Please enter the number (odd): ";
        cin >> base_width;
    } while (base_width % 2 == 0);

    int upper_row_numbers = base_width;
    int half_height = base_width / 2;
    int next_number = 1;
    int upper_indent = 0;
    for (int upper_row = 0; upper_row < half_height; upper_row++)
    {
        for (int upper_space_step = 0; upper_space_step < upper_indent; upper_space_step++)
        {
            cout << " ";
        }
        upper_indent += 3;

        for (int upper_num_step = 0; upper_num_step < upper_row_numbers; upper_num_step++)
        {
            if (next_number < 10)
            {
                cout << next_number << "  ";
            }
            else
            {
                cout << next_number << " ";
            }
            next_number++;
        }
        upper_row_numbers -= 2;
        cout << endl;
    }

    // DOWN

    int lower_indent = half_height * 3;
    int lower_row_numbers = 1;
    for (int lower_row = 0; lower_row <= half_height; lower_row++)
    {

        for (int lower_space_step = 1; lower_space_step <= lower_indent; lower_space_step++)
        {
            cout << " ";
        }
        lower_indent -= 3;

        for (int lower_num_step = 0; lower_num_step < lower_row_numbers; lower_num_step++)
        {
            if (next_number < 10)
            {
                cout << next_number << "  ";
            }
            else
            {
                cout << next_number << " ";
            }
            next_number++;
        }
        lower_row_numbers = lower_row_numbers + 2;

        cout << endl;
    }

    return 0;
}