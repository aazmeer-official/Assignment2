#include <iostream>
using namespace std;

int main()
{
    int original[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(original) / sizeof(original[0]);
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

    return 0;
}