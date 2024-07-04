// #include<bits/stdc++.h>
// using namespace std;

// // int main()
// // {
// //     int t;
// //     cin>>t;

// //     for (int i = 0; i < t; i++)
// //     {
// //         string s1, s2;
// //         cin>>s1>>s2;

// //         if(s1==s2)
// //         {
// //             cout<<s1<<" "<<s2<<endl;
// //         }
// //         else
// //         {
// //             char temp[5];
// //             temp[0]=s1[0];
// //             s1[0]=s2[0];
// //             s2[0]=temp[0];
            
// //             cout<<s1<<" "<<s2<<endl;
// //         }
// //     }
// //     return 0;
// // }


//-----------------B----------//
// #include <bits/stdc++.h>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int tt;
//     cin >> tt;

//     while (tt--)
//     {
//         int num;
//         cin >> num;

//         int bx = 2;
//         int max_Sum = 0;

//         for (int s = 2; s <= num; ++s)
//         {
//             int k = num / s;
//             int sum = s * (k * (k + 1)) / 2;

//             if (sum > max_Sum){
//                 max_Sum = sum;
//                 bx = s;
//             }
//         }
//         cout << bx << endl;
//     }
//     return 0;
// }


// //----------C---------//
// #include<bits/stdc++.h> 
// using namespace std; 

// #define ll long long 
// #define vll vector<long long> 
// #define vpll vector<pair<long long,long long>> 
// #define pll pair<ll,ll> 
// #define gcd __gcd 
// #define inf 1e18 
// #define pb push_back 
// #define ff first 
// #define ss second 
// #define f(i,a,n) for(long long int i=a;i<n;i++) 
// #define g(i,a,n) for(long long int i=a;i>=n;i--) 
// #define w(t)  int t; cin>>t; f(case_num,1,t+1) 
// #define all(x) x.begin(),x.end() 
// #define yes()  cout<<"YES"<<endl  
// #define no()   cout<<"NO"<<endl 

// const int N=1e5+5; 
// #define Mod 1000000007 

// int main() 
// { 
//     w(t) 
//     { 
//         int n; 
//         cin>>n; 
//         vector<int> arr(n); 
//         for(int i=0;i<n;i++) cin>>arr[i]; 
        
//         unordered_set<int> seen; // Using unordered_set for constant time lookup
//         int ans = 0; 
//         int curr = 0; 
        
//         for(int i=0;i<n;i++)
//         { 
//             curr += arr[i]; 
//             seen.insert(arr[i]); 
//             if(curr % 2 == 0 && seen.count(curr / 2)) // Checking if curr/2 exists in the set
//                 ans++; 
//         } 
        
//         cout<<ans<<endl; 
//     } 
// } 
