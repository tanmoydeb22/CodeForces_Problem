#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == j)
            {
                cout << i + 1;
                cout << " ";
            }
        }
    }
    return 0;
}