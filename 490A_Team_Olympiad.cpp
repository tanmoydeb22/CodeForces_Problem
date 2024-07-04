#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[5001];
    int arr2[5001];
    int arr3[5001];
    int n;
    cin>>n;

    int t[n];
    int a=0, b=0, c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>t[i];
        if(t[i]==1){arr1[a]=i+1;a++;}
        else if(t[i]==2){arr2[b]=i+1;b++;}
        else{arr3[c]=i+1;c++;}
    }
    int mn1 = min(a, b);
    int mn = min(mn1, c);
    cout<<mn<<endl;

    for(int i=0;i<mn;i++){
		cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
	}
    return 0;
}