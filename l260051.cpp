#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "=====================================" << endl;
        cout << "PROGRAMMING FUNDAMENTALS ASSIGNMENT 2" << endl;
        cout << "=====================================" << endl;
        cout << " 1. Hourglass Pattern" << endl;
        cout << " 2. Number Pyramid Pattern" << endl;
        cout << " 3. Star Diamond Pattern" << endl;
        cout << " 4. Square Spiral Pattern" << endl;
        cout << " 5. Kth Smallest Negative in Window" << endl;
        cout << " 6. Seismic Cross-Tomography" << endl;
        cout << " 7. Frequency Sort" << endl;
        cout << " 8. Second-Next/Second-Prev Product" << endl;
        cout << " 9. Find Non-Duplicate Element" << endl;
        cout << "10. Student Performance Predictor" << endl;
        cout << " 0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
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

            break;
        }
        case 2:
        {
            // TODO: Number Pyramid Pattern
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
            break;
        }
        case 3:
        {
            // TODO: Star Diamond Pattern
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
            break;
        }
        case 4:
        {
            // TODO: Square Spiral Pattern
            break;
        }
        case 5:
        {
            // TODO: Kth Smallest Negative in Window
            cout << "Please Enter the size of array : ";
            int size;
            cin >> size;
            int numbers[1000] = {};
            cout << "Please Enter the values of ARRAY : ";
            for (int idx = 0; idx < size; idx++)
            {
                cin >> numbers[idx];
            }

            int window[1000] = {};
            int result[1000] = {};
            int k;
            cout << "Enter the value of k : ";
            cin >> k;
            int x;
            cout << "Enter the value of x : ";
            cin >> x;
            x -= 1;
            int window_start = 0, window_end = k;
            while (window_end <= size)
            {
                int pos = window_start;
                while (pos < window_end)
                {
                    for (int copy_idx = 0; copy_idx < k; copy_idx++)
                    {
                        window[copy_idx] = numbers[pos];
                        pos++;
                    }
                    for (int pass_no = 0; pass_no < k; pass_no++)
                    {
                        int left = 0, right = k - pass_no - 1;
                        while (left < right)
                        {
                            if (window[left] > window[right])
                            {
                                swap(window[left], window[right]);
                            }
                            left++;
                        }
                    }
                    // For Printing Windows

                    // cout << "[";
                    // for (int print_idx = 0; print_idx < k; print_idx++)
                    // {
                    //     cout << window[print_idx] << " ";
                    // }
                    // cout << "]";

                    if (x >= k || window[x] >= 0)
                    {
                        window[x] = 0;
                    }
                    result[window_start] = window[x];
                }
                // cout << endl;
                window_start++;
                window_end++;
            }
            cout << "[";
            for (int out_idx = 0; out_idx < size - k + 1; out_idx++)
            {
                cout << result[out_idx] << " ";
            }
            cout << "]";

            break;
        }
        case 6:
        {
            // TODO: Seismic Cross-Tomography
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

            break;
        }
        case 7:
        {
            // TODO: Frequency Sort
            int input_data[1000] = {};
            int total_items;
            cout << "Please Specify the size of Array : ";
            cin >> total_items;
            cout << "Please Enter the values of Array : ";
            for (int value_frequency = 0; value_frequency < total_items; value_frequency++)
            {
                cin >> input_data[value_frequency];
            }

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
            break;
        }
        case 8:
        {
            // TODO: Second-Next/Second-Prev Product
            int original[1000] = {};
            int length;
            cout << "Please enter the length of array : ";
            cin >> length;
            cout << "Please Enter the values of Array : ";
            for (int i = 0; i < length; i++)
            {
                cin >> original[i];
            }

            int updated[1000] = {};
            for (int current = 0; current < length; current++)
            {
                // cout << original[current] << " ";
                int second_prev = current - 2;
                int second_next = current + 2;
                if (second_next >= length)
                {
                    second_next = second_next % length;
                }
                if (second_prev < 0)
                {
                    second_prev = length + second_prev;
                }
                updated[current] = original[second_prev] * original[second_next];
                // cout << original[second_prev] << " " << original[current] << " " << original[second_next] << endl;
            }
            for (int copy_at = 0; copy_at < length; copy_at++)
            {
                original[copy_at] = updated[copy_at];
            }

            // Printing values
            cout << "[";
            for (int print_at = 0; print_at < length; print_at++)
            {
                cout << original[print_at] << " ";
            }
            cout << "]";
            break;
        }
        case 9:
        {
            // TODO: Find Non-Duplicate Element
            int arr_xor[] = {4, 2, 4, 5, 2};
            for (int xor_step = 1; xor_step < sizeof(arr_xor) / sizeof(arr_xor[0]); xor_step++)
            {
                arr_xor[0] ^= arr_xor[xor_step];
            }
            cout << arr_xor[0];
            break;
        }
        case 10:
        {
            // TODO: Student Performance Predictor
            cout << "Please Define the total number of students : ";
            int n;
            cin >> n;
            int student[1000] = {};
            int marks[1000] = {};
            string name[1000] = {};
            for (int i = 0; i < n; i++)
            {
                cout << "Please Enter the id of student : ";
                cin >> student[i];
                cout << "Please Enter the Name of Student : ";
                cin >> name[i];
                cout << "Programming Marks : ";
                cin >> marks[(i * 4) + 0];
                cout << "Maths Marks : ";
                cin >> marks[(i * 4) + 1];
                cout << "DS Marks : ";
                cin >> marks[(i * 4) + 2];
                cout << "AI Marks : ";
                cin >> marks[(i * 4) + 3];
            }

            cout << "ID\t" << "Name\t" << "Programming\t" << "Maths\t" << "DS\t" << "AI\t" << "Total\t" << "Average\t" << "Result";
            cout << endl;

            for (int i = 0; i < n; i++)
            {
                int total = (marks[(i * 4) + 0]) + (marks[(i * 4) + 1]) + (marks[(i * 4) + 2]) + (marks[(i * 4) + 3]);

                double avg = total / 4.0;

                cout << i + 1 << "\t" << name[i] << "\t   " << marks[(i * 4) + 0] << "\t\t" << marks[(i * 4) + 1] << "\t" << marks[(i * 4) + 2] << "\t" << marks[(i * 4) + 3] << "\t" << total << "\t" << avg << "\t";
                if (avg >= 50)
                {
                    cout << "PASS";
                }
                else
                {
                    cout << "FAIL";
                }
                cout << endl;
            }

            break;
        }
        case 0:
        {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice, please try again." << endl;
        }
        }
        cout << endl;

    } while (choice != 0);

    return 0;
}