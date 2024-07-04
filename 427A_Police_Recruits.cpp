#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];
    int sum = 0, c = 0;
    for (int i=0; i<n; i++)
    {
        cin>>num[i];
        if(num[i]==-1)
        {
            if(!sum)
            {
                c++;
            }
            else
            {
                sum--;
            }
        }
        else
            sum+=num[i];
    }
    cout<<c<<endl;
    return 0;
}