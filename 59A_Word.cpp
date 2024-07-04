#include <iostream>
#include <string.h>
using namespace std;

// Tanmoy

int main()
{
    string s;
    cin >> s;
    int up = 0;
    int low = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if (up > low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}