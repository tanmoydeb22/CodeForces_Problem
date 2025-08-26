// /*********************************************|
// |         This is me Tanmoy Deb.......        |
// |*********************************************/

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin>>n>>k;

//     long long base = pow(10, n - 1);
//     long long base2 = pow(10, n);
//     long long val = base * k * n;

//     while (val < base || val > base2)
//         val /= 10;

//     cout << val << endl;
//     return 0;
// }
/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;

    if(t==10 && n==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    if(t==10)
    {
        cout<<t;
        for (int i = 2; i < n; i++)
        {
            cout<<"0";
        }
        cout<<endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout<<t;
        }
        cout<<endl;    
    }
       
    return 0;
}