#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int length = s.size();
        if (length > 10)
        {
            int count = 0;
            for (int j = 1; j < s.size() - 1; j++)
            {
                count++;
            }
            cout << s[0] << count << s[s.size() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}