#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];

    int left = 0, right = n - 1;
    int Dima = 0, Seraja = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[left]>a[right])
        {
            if (i&1)
            {
                Dima += a[left];
            }
            else
            {
                Seraja += a[left];
            }
            left++;
        }
        else
        {
            if (i&1)
            {
                Dima += a[right];
            }
            else
            {
                Seraja += a[right];
            }
            right--;
        }
    }
    cout << Seraja << " " << Dima << endl;
    return 0;
}