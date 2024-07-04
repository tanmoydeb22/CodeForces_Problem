#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    int p, q, r, s;
    p=(a+b)*c;
    q=a*(b+c);
    r=a*b*c;
    s=a+b+c;
    if(p>=q&&p>=r&&p>=s)
    {
        cout<<p<<endl;
    }
    else if(q>=p&&q>=r&&q>=s)
    {
        cout<<q<<endl;
    }
    else if(r>=q&&r>=p&&r>=s)
    {
        cout<<r<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
   return 0; 
}