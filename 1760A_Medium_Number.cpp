#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a, b, c;
    for(int i=0 ; i<t ; i++)
    {
        cin>>a>>b>>c;
        if((a>b && b>c)||(c>b && b>a))
        {
            cout<<b<<endl;
        }
        else if((b>a && a>c)||(c>a && a>b))
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    return 0;
}