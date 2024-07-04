#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    string s;
    for(int i=0 ; i<t ; i++)
    {
        cin>>n;
        cin>>s;
        int x1=0, x2=0;
        for(int j=0 ; j<n ; j++)
        {
            if(s[j]=='B')
            {
                x1=j;
                break;
            }
        }
        for(int j=n-1 ; j>0 ; j--)
        {
            if(s[j]=='B')
            {
                x2=j;
                break;
            }
        }
        int ans = x2-x1+1; 
        cout<<ans<<endl;
    }
    return 0;
}