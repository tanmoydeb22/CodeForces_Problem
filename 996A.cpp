#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ans, rem;
    
    ans = n / 100;
    rem = n % 100;
    ans += rem / 20;
    rem = rem % 20;
    ans += rem / 10;
    rem = rem % 10;
    ans += rem / 5;
    rem = rem % 5;
    ans += rem / 1;
    
    cout<<ans;
    return 0;
}