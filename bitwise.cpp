#include <iostream>
using namespace std;

int main()
{
    int xor_data[] = {4, 2, 4, 5, 2};
    for (int xor_step = 1; xor_step < sizeof(xor_data) / sizeof(xor_data[0]); xor_step++)
    {
        xor_data[0] ^= xor_data[xor_step];
    }
    cout << xor_data[0];
    return 0;
}