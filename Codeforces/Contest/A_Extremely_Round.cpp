#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Loop through all test cases
    for (int i = 0; i < t; i++)
    {
        // Read the input integer for this test case
        int n;
        cin >> n;

        // Initialize the counter for the number of extremely round integers to 0
        int count = 0;

        // Loop through all numbers from 1 to n
        for (int i = 1; i <= n; i++)
        {
            // Convert the number to a string and check if it contains only one non-zero digit
            string str = to_string(i);
            int non_zero_count = 0;
            for (int j = 0; j < str.length(); j++)
            {
                if (str[j] != '0')
                {
                    non_zero_count++;
                }
            }
            if (non_zero_count == 1)
            {
                // If it has only one non-zero digit, increment the counter
                count++;
            }
        }

        // Print the final count for this test case
        cout << count << endl;
    }

    return 0;
}
