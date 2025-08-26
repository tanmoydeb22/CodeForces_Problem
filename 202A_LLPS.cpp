/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int cnt = 1;
    for (int i = s.length() - 2; i >= 0; i--)
    {
        if (s[i + 1] != s[i])
            break;
        cnt++;
    }

    string s_new(cnt, s[s.length() - 1]);

    cout << s_new << endl;
    return 0;
}