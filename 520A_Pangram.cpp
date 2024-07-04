#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    string s;
    cin >> s;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     s[i] = tolower(s[i]);
    // }
    transform (s.begin() , s.end (),s.begin (), ::tolower);

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    if (count == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}