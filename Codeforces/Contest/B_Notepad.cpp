#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Loop over all test cases
    while (t--)
    {
        // Read the length of the string
        int n;
        cin >> n;

        // Read the string
        string s;
        cin >> s;

        // Check if it is possible to type the string in strictly less than n operations
        bool possible = true;
        for (int i = 1; i < n && possible; ++i)
        {
            // Check if the string can be typed in strictly less than n operations
            // by checking if the last i characters of the string match any of the
            // substrings in the string
            possible = s.substr(n - i, i) != s.substr(0, i);
        }

        // Print the result
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
