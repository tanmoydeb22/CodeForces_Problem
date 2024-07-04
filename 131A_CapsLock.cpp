#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c1 = 0;
    if ((s.size() == 1) && (s[0] == tolower(s[0])))
    {
        s[0] = toupper(s[0]);
        cout << s;
    }
    else if ((s.size() == 1) && (s[0] == toupper(s[0])))
    {
        s[0] = tolower(s[0]);
        cout << s;
    }
    else
    {
        int c = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == toupper(s[i]))
            {
                c++;
            }
        }
        if (c == s.size() - 1)
        {
            for (int i = 1; i < s.size(); i++)
            {
                if (s[0] == tolower(s[0]))
                {
                    s[i] = tolower(s[i]);
                }
                else
                {
                    s[i] = tolower(s[i]);
                }
            }
            if (s[0] == tolower(s[0]))
            {
                s[0] = toupper(s[0]);
                cout << s;
            }
            else
            {
                s[0] = tolower(s[0]);
                cout << s;
            }
        }
        else
            cout << s;
    }
    return 0;
}