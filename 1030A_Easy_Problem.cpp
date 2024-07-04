#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int s[n];
    int sum=0;

    for (int i=0; i<n; i++)
    {
        cin>>s[i];

        if(s[i]>0)
        {
            sum+=s[i];
        }
    }
    (sum>0) ? (cout<<"HARD") : (cout<<"EASY");
    return 0;
}