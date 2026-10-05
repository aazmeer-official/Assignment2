#include <iostream>
#include <string>
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
            int hourglass_count;
            do
            {
                cout << "Please enter the number (odd): ";
                cin >> hourglass_count;
            } while (hourglass_count % 2 == 0);

            int count_u = hourglass_count;
            int half_hourglass = hourglass_count / 2;
            int lowerpart_spaces_hourglass = 1;
            int spaces_u = 0;
            for (int i = 0; i < half_hourglass; i++)
            {
                for (int k = 0; k < spaces_u; k++)
                {
                    cout << " ";
                }
                spaces_u += 3;

                for (int j = 0; j < count_u; j++)
                {
                    if (lowerpart_spaces_hourglass < 10)
                    {
                        cout << lowerpart_spaces_hourglass << "  ";
                    }
                    else
                    {
                        cout << lowerpart_spaces_hourglass << " ";
                    }
                    lowerpart_spaces_hourglass++;
                }
                count_u -= 2;
                cout << endl;
            }

            // DOWN

            int spaces = half_hourglass * 3;
            int x = 1;
            for (int i = 0; i <= half_hourglass; i++)
            {

                for (int j = 1; j <= spaces; j++)
                {
                    cout << " ";
                }
                spaces -= 3;

                for (int o = 0; o < x; o++)
                {
                    if (lowerpart_spaces_hourglass < 10)
                    {
                        cout << lowerpart_spaces_hourglass << "  ";
                    }
                    else
                    {
                        cout << lowerpart_spaces_hourglass << " ";
                    }
                    lowerpart_spaces_hourglass++;
                }
                x = x + 2;

                cout << endl;
            }

            break;
        }
        case 2:
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

            break;
        }
        case 3:
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
            break;
        }
        case 4:
        {
            int N;
            cout << "Please Enter the value : ";
            cin >> N;
            for (int row = 0; row < N; row++)
            {
                for (int col = 0; col < N; col++)
                {
                    int n = N, start = 1, r = row, c = col;
                    int value;

                    // Making the box small
                    while (r > 0 && c > 0 && r < n - 1 && c < n - 1)
                    {
                        start = start + 4 * n - 4;
                        n = n - 2;
                        r--;
                        c--;
                    }

                    // TOP
                    if (r == 0)
                    {
                        value = start + c;
                    }

                    // Left
                    else if (c == 0)
                    {
                        value = 4 * n - r - 3 + (start - 1);
                    }

                    // Right
                    else if (c == n - 1)
                    {
                        value = (n - 1) + r + start;
                    }
                    // Bottom
                    else if (r = n - 1)
                    {
                        value = (start - 1) + 3 * n - 2 - c;
                    }
                    if (value < N)
                    {
                        cout << value << "  ";
                    }
                    else
                    {
                        cout << value << " ";
                    }
                }
                cout << endl;
            }
            break;
        }
        case 5:
        {
            cout << "Please Enter the size of array : ";
            int n;
            cin >> n;
            int arr[1000] = {};
            cout << "Please Enter the values of ARRAY : ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            int arr2[1000] = {};
            int arr3[1000] = {};
            int k;
            cout << "Enter the value of k : ";
            cin >> k;
            int x;
            cout << "Enter the value of x : ";
            cin >> x;
            x -= 1;
            int start = 0, end = k;
            while (end <= n)
            {
                int start2 = start;
                while (start2 < end)
                {
                    for (int i = 0; i < k; i++)
                    {
                        arr2[i] = arr[start2];
                        start2++;
                    }
                    for (int swapping = 0; swapping < k; swapping++)
                    {
                        int start_sorting = 0, end_sorting = k - swapping - 1;
                        while (start_sorting < end_sorting)
                        {
                            if (arr2[start_sorting] > arr2[end_sorting])
                            {
                                swap(arr2[start_sorting], arr2[end_sorting]);
                            }
                            start_sorting++;
                        }
                    }
                    // For Printing Windows

                    // cout << "[";
                    // for (int j = 0; j < k; j++)
                    // {
                    //     cout << arr2[j] << " ";
                    // }
                    // cout << "]";

                    if (x >= k || arr2[x] >= 0)
                    {
                        arr2[x] = 0;
                    }
                    arr3[start] = arr2[x];
                }
                // cout << endl;
                start++;
                end++;
            }
            cout << "[";
            for (int i = 0; i < n - k + 1; i++)
            {
                cout << arr3[i] << " ";
            }
            cout << "]";

            break;
        }
        case 6:
        {
            int arr[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
            int row, column;
            do
            {
                cout << "Enter the value of Row : ";
                cin >> row;
            } while (row < 0 || row > 4);
            do
            {
                cout << "Enter the value of Column : ";
                cin >> column;
            } while (column < 0 || column > 4);
            int index = row * 5 + column;
            int value = arr[index];
            int top, bottom, left, right;

            top = value - 5;
            bottom = value + 5;
            right = value + 1;
            left = value - 1;

            // EDGE CASES
            // TOP
            if (value >= 1 && value <= 5)
            {
                top = 0;
            }

            // Right
            if (value % 5 == 0)
            {
                right = 0;
            }

            // Left
            if (value % 5 == 1)
            {
                left = 0;
            }

            // Bottom
            if (value >= 21 && value <= 25)
            {
                bottom = 0;
            }

            // cout << top << " " << left << " " << bottom << " " << right;
            int sum = top + right + left + bottom;
            cout << "Target Id: " << index << endl;
            cout << "Target Value: " << value << endl;
            cout << "Crossectional Values Sum : " << sum;

            break;
        }
        case 7:
        {
            int arr[1000] = {};
            int n;
            cout << "Please Specify the size of Array : ";
            cin >> n;
            cout << "Please Enter the values of Array : ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            int arr2[1000] = {};
            int min = arr[0];
            int max = arr[0];
            // For finding min and max
            for (int i = 0; i < n; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                }
                if (max < arr[i])
                {
                    max = arr[i];
                }
            }

            // For finding the frequency
            for (int i = min; i <= max; i++)
            {
                int count = 0;
                for (int j = 0; j < n; j++)
                {
                    if (arr[j] == i)
                    {
                        count++;
                    }
                    arr2[i] = count;
                }
            }

            // Finding the max index
            int counter = 0;
            for (int k = 0; k <= max; k++)
            {
                int idx = 0;
                for (int i = 0; i <= max; i++)
                {
                    for (int j = i + 1; j <= max; j++)
                    {
                        if (arr2[j] > arr2[idx])
                        {
                            idx = j;
                        }
                    }
                }
                int value = arr2[idx];

                for (int l = 0; l < value; l++)
                {
                    arr[counter] = idx;
                    counter++;
                }

                arr2[idx] = 0;
            }

            // Frequency Sorted Array

            cout << "[";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << ", ";
            }
            cout << "]";
            break;
        }
        case 8:
        {
            int arr[1000] = {};
            int n;
            cout << "Please enter the length of array : ";
            cin >> n;
            cout << "Please Enter the values of Array : ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            int arr2[1000] = {};
            for (int i = 0; i < n; i++)
            {
                // cout << arr[i] << " ";
                int prev = i - 2;
                int next = i + 2;
                if (next >= n)
                {
                    next = next % n;
                }
                if (prev < 0)
                {
                    prev = n + prev;
                }
                arr2[i] = arr[prev] * arr[next];
                // cout << arr[prev] << " " << arr[i] << " " << arr[next] << endl;
            }
            for (int i = 0; i < n; i++)
            {
                arr[i] = arr2[i];
            }

            // Printing values
            cout << "[";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "]";
            break;
        }
        case 9:
        {
            int arr[] = {4, 2, 4, 5, 2};
            for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
            {
                arr[0] ^= arr[i];
            }
            cout << arr[0];
            break;
        }
        case 10:
        {
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