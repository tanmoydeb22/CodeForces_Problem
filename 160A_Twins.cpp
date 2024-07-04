#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    int c = 0, count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        c += arr[i];
        count++;
        if (c > (sum / 2))
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}