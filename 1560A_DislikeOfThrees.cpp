#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for(int k=0 ; k<n ; k++)
    {
        cin>>t;
        int sum=0;
        for(int i=1; i<1667; i++)
        {
            if(i%3 != 0 && i%10 != 3){
                sum += 1;
            }
            if(sum==t)
            {
             cout<<i<<endl;
             break;
            }
        }
    }
	return 0;
}
