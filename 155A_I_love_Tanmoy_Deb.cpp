#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num[n];
    for (int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    int min = num[0];
    int max = num[0];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
            count++;
        }
        if(num[i]>max)
        {
            max=num[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}