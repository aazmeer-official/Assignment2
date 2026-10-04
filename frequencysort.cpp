#include <iostream>
using namespace std;

int main()
{
    int input_data[] = {1, 2, 1, 3, 4, 2, 3, 3, 8, 7, 4, 2, 2};
    int total_items = sizeof(input_data) / sizeof(input_data[0]);
    int frequency[1000] = {};
    int smallest = input_data[0];
    int largest = input_data[0];
    // For finding min and max
    for (int item_no = 0; item_no < total_items; item_no++)
    {
        if (smallest > input_data[item_no])
        {
            smallest = input_data[item_no];
        }
        if (largest < input_data[item_no])
        {
            largest = input_data[item_no];
        }
    }

    // For finding the frequency
    for (int candidate = smallest; candidate <= largest; candidate++)
    {
        int times_seen = 0;
        for (int scan_no = 0; scan_no < total_items; scan_no++)
        {
            if (input_data[scan_no] == candidate)
            {
                times_seen++;
            }
            frequency[candidate] = times_seen;
        }
    }

    // Finding the max index
    int write_pos = 0;
    for (int round_no = 0; round_no <= largest; round_no++)
    {
        int best_number = 0;
        for (int outer_no = 0; outer_no <= largest; outer_no++)
        {
            for (int inner_no = outer_no + 1; inner_no <= largest; inner_no++)
            {
                if (frequency[inner_no] > frequency[best_number])
                {
                    best_number = inner_no;
                }
            }
        }
        int best_count = frequency[best_number];

        for (int fill_no = 0; fill_no < best_count; fill_no++)
        {
            input_data[write_pos] = best_number;
            write_pos++;
        }

        frequency[best_number] = 0;
    }

    // Frequency Sorted Array

    cout << "[";
    for (int show_no = 0; show_no < total_items; show_no++)
    {
        cout << input_data[show_no] << ", ";
    }
    cout << "]";
    return 0;
}