#include<bits/stdc++.h>
using namespace std;

// bool isPrime(int num)
// {
//     for (int i = 2; i < num/2; i++)
//     {
//         if(num%i != 0)
//         {
//             return true;
//         } 
//         else
//         {
//             return false;
//         }
//     }
// }

int main()
{
    int n;
    cin>>n;

    if(n%2!=0 && n>12)
    {
        cout<<"9"<<" "<<n-9<<endl;
    }
    else
    {
        cout<<"8"<<" "<<n-8<<endl;
    }
    

    return 0;
}