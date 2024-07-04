#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=0, q=0, r=0;
    int x, y, z;
    for (int i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        p += x;
        q += y;
        r += z;
    }
    // emni
    if(p==0 && q==0 && r==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}