// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         if (n < 10)
//         {
//             cout << "1" << endl
//                  << n << endl;
//         }
//         else if (n == 10000)
//         {
//             cout << "1" << endl
//                  << n << endl;
//         }
//         else if (n > 9 && n < 100)
//         {
//             if (n % 10 == 0)
//             {
//                 cout << "1" << endl
//                      << n << endl;
//             }
//             else
//             {
//                 int rem = n % 10;
//                 int div = n / 10;
//                 cout << "2" << endl
//                      << div * 10 << " " << rem << endl;
//             }
//         }
//         else if (n > 99 && n < 1000)
//         {
//             if (n % 100 == 0)
//             {
//                 cout << "1" << endl
//                      << n << endl;
//             }
//             else
//             {
//                 int rem = n % 100;
//                 int div = n / 100;
//                 if ((rem % 10 == 0) || (rem >= 1 && rem < 10))
//                 {
//                     cout << "2" << endl
//                          << div * 100 << " " << rem << endl;
//                 }
//                 else
//                 {
//                     int r = rem % 10;
//                     int d = rem / 10;
//                     cout << "3" << endl
//                          << div * 100 << " " << d * 10 << " " << r << endl;
//                 }
//             }
//         }
//         else
//         {
//             if (n % 1000 == 0)
//             {
//                 cout << "1" << endl
//                      << n << endl;
//             }
//             else
//             {
//                 int rem = n % 1000;
//                 int div = n / 1000;
//                 if ((rem % 100 == 0) || (rem >= 1 && rem <= 10) || ((rem >= 11 && rem <= 99) && (rem % 10 == 0)))
//                 {
//                     cout << "2" << endl
//                          << div * 1000 << " " << rem << endl;
//                 }
//                 else
//                 {
//                     if ((rem % 10 == 0) || (rem % 100 <= 9))
//                     {
//                         int r = rem % 100;
//                         int d = rem / 100;
//                         cout << "3" << endl
//                              << div * 1000 << " " << d * 100 << " " << r << endl;
//                     }
//                     else if (rem >= 11 && rem <= 99)
//                     {
//                         int r = rem % 10;
//                         int d = rem / 10;
//                         cout << "3" << endl
//                              << div * 1000 << " " << d * 10 << " " << r << endl;
//                     }
//                     else
//                     {
//                         int r = rem % 100;
//                         int d = rem / 100;

//                         int r1 = r % 10;
//                         int d1 = r / 10;
//                         cout << "4" << endl
//                              << div * 1000 << " " << d * 100 << " " << d1 * 10 << " " << r1 << endl;
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int>my;
        int n, count=0;
        cin>>n;

        if(n%10!=0){my.push_back(n%10);}
        int ans = n % 10;
        n-=ans;
        if(n%100!=0){my.push_back(n%100);}
        ans = n % 100;
        n-=ans;
        if(n%1000!=0){my.push_back(n%1000);}
        ans = n % 1000;
        n-=ans;
        if(n%10000!=0){my.push_back(n%10000);}
        if(n>=10000 && n%10000==0){my.push_back(n);}
        cout<<my.size()<<endl;
        for (int i = 0; i < my.size(); i++){cout<<my[i]<<" ";}  
    }
    return 0;
}