#include <bits/stdc++.h>
using namespace std;

string remVowel(string str)
{
    regex r("[aeiouyAEIOUY]");

    return regex_replace(str, r, "");
}

string insert_dot(string str)
{
    string temp = "";
    int l = str.length();

    for (int i = 0; i < l; i++)
    {
        if ((str[i] >= 'a' and str[i] <= 'z') or
            (str[i] >= 'A' and str[i] <= 'Z'))
        {
            temp = temp + "." + str[i];
        }
        else
        {
            temp = temp + str[i];
        }
    }

    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    s = remVowel(s);

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s = insert_dot(s);
    cout << s << endl;
    return 0;
}
