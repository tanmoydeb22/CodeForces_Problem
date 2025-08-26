/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int cnt = 0;
    cnt+=a;
    while(a>=b)
    {
        int mod = a % b;
        a /= b;
        cnt+=a;

        a+=mod;
    }
    cout<<cnt<<endl;
    return 0;
}