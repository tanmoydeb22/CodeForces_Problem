#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a, b, c, d;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c>>d;
        int s=0;
        if(a<b)
        {
           s++;
        }
        if(a<c)
        {
           s++; 
        } 
        if(a<d)
        {
           s++;
        }
        cout<<s<<endl;
    }
}