#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char s1[s.size()];
    if (s.size() == 1)
    {
        cout << s << endl;
    }
    else
    {
        int a = 0;
        for (int i = 0; i < (s.size() / 2) + 1; i++)
        {
            s1[i] = s[a];
            a += 2;
        }
        for (int i = 0; i < strlen(s1); i++)
        {
            for (int j = i + 1; j < strlen(s1); j++)
            {
                if (s1[i] > s1[j])
                {
                    int temp = s1[i];
                    s1[i] = s1[j];
                    s1[j] = temp;
                }
            }
        }

        int b = 0;
        for (int i = 0; i < s.size(); i += 2)
        {
            s[i] = s1[b];
            b++;
        }
        cout << s << endl;
    }
    return 0;
}