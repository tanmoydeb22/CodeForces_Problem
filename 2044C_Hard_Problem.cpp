// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int m, a, b, c;
//     cin>>m>>a>>b>>c;

//     if(a<=m && b<=m)
//     {
//         int sum = a + b;
//         if( c + sum > 2*m)
//             cout<<2*m<<endl;
//         else
//             cout<<c+sum<<endl;
//     }
//     else if(a>=m && b<=m)
//     {
//         int sum = m + b;
//         if( c + sum > 2*m)
//             cout<<2*m<<endl;
//         else
//             cout<<c+sum<<endl;
//     }
//     else if(a<=m && b>=m)
//     {
//         int sum = a + m;
//         if( c + sum > 2*m)
//             cout<<2*m<<endl;
//         else
//             cout<<c+sum<<endl;
//     }
//     else
//     {
//         int sum = m + m;
//         if( c + sum > 2*m)
//             cout<<2*m<<endl;
//         else
//             cout<<c+sum<<endl;
//     }
// }

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


long long int c_pairs(long long int k, long long int l1, long long int r1, long long int l2, long long int r2)
{
    long long int c = 0;
    for (long long int i = l1; i <= r1; i++)
    {
        long long int mn_pwr = (l2 + i - 1) / i;
        long long int mx_pwr = r2 / i;
        long long int pwr = 1;

        while (pwr <= mx_pwr)
        {
            if (pwr >= mn_pwr)
            {
                c++;
            }
            if (pwr > r2 / k)
            {
                break;
            }
            pwr *= k;
        }
    }
    return c;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        cout<<c_pairs(k, l1, r1, l2, r2)<<endl;
    }

    return 0;
}