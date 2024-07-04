#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if ((a + b + c) % 2 != 0)
            {
                cout << "-1" << endl;
            }
            else if (a+b>c && a+c>b && b+c>a)
            {
                cout<<(a+b+c)/2<<endl;
            }
            else
            {
                int min1=min(a, b);
                int max1=max(a, b);
                int min2=min(max1, c);
                cout<<min1+min2<<endl;
            }
        }
    }
    return 0;
}