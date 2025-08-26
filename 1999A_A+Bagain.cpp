#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;

        int div = num / 10;
        int rem = num % 10;
        if(rem!=0)
        {
           cout<<div+rem<<endl;
        }
        else
        {
            cout<<num/10<<endl;
        }
    }
    return 0;
}