#include<iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;  

    int x=(k*l)/(n*nl);
    int y=(c*d)/n;
    int z=(p)/(n*np);
     
    int a=min(x, y);
    int b=min(a, z);
    cout<<b<<endl;
    return 0;
}