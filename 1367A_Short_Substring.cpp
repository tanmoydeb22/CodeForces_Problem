#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
     for (int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        
        string a = s.substr(0, 2);
        for (int j=3; j<s.size(); j+=2)
        {
            a += s[j];
        }
        cout<<a<<endl;
    }
    return 0;
}