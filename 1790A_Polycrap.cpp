#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    string pi="314159265358979323846264338327";
    for(int i=0; i<t; i++)
    {
        cin>>s;
        int count=0;
        for(int j=0; j<s.size(); j++)
        {
                if(pi[j]!=s[j])
                {
                    break;
                }
                else
                {
                    count++;
                }
        }
        cout<<count<<endl; 
    }
    return 0;
}