// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int a[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin>>a[i];
//         }
//         sort(a, a+3);
//         cout<<a[2]-a[0]<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// #define in long long int
// #define vi vector<in>
// #define readArr(arr) for(auto &elem: arr) cin>>elem


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     in t = 1;
//     cin >> t;

//     while(t--)
//     {
//         in nRows, nCols;
//         cin>>nRows>>nCols;
//         in mat[nRows][nCols];
//         for (in rowIdx = 0; rowIdx < nRows; rowIdx++) {
//             for (in colIdx = 0; colIdx < nCols; colIdx++) {cin >> mat[rowIdx][colIdx];}
//         }
//         for (in rowIdx = 0; rowIdx < nRows; rowIdx++) {
//             for (in colIdx = 0; colIdx < nCols; colIdx++) {
//                 in maxVal = 0;
//                 in updateFlag = 1; 

//                 if (rowIdx + 1 < nRows) {
//                     maxVal = max(maxVal, mat[rowIdx + 1][colIdx]);
//                 }
//                 if (rowIdx - 1 >= 0) {
//                     maxVal = max(maxVal, mat[rowIdx - 1][colIdx]);
//                 }
//                 if (colIdx + 1 < nCols) {
//                     maxVal = max(maxVal, mat[rowIdx][colIdx + 1]);
//                 }
//                 if (colIdx - 1 >= 0) {
//                     maxVal = max(maxVal, mat[rowIdx][colIdx - 1]);
//                 }

                
//                 if (colIdx - 1 >= 0 && mat[rowIdx][colIdx] <= mat[rowIdx][colIdx - 1]) {
//                     updateFlag = 0;
//                 }
//                 if (rowIdx - 1 >= 0 && mat[rowIdx][colIdx] <= mat[rowIdx - 1][colIdx]) {
//                     updateFlag = 0;
//                 }
//                 if (colIdx + 1 < nCols && mat[rowIdx][colIdx] <= mat[rowIdx][colIdx + 1]) {
//                     updateFlag = 0;
//                 }
                
//                 if (rowIdx + 1 < nRows && mat[rowIdx][colIdx] <= mat[rowIdx + 1][colIdx]) {
//                     updateFlag = 0;
//                 }
                

//                 if (updateFlag == 1) {
//                     mat[rowIdx][colIdx] = maxVal;
//                 }
//             }
//         }
//         for (in rowIdx = 0; rowIdx < nRows; rowIdx++) {
//             for (in colIdx = 0; colIdx < nCols; colIdx++) {
//                 cout << mat[rowIdx][colIdx] << " ";}
//             cout << endl;
//         }
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) 
    {
        int n, m;
        cin>>n>>m;
        string x;
        cin>>x;
        vector<int> cc(m);
        for (int &d : cc) { 
            cin >> d;
        }
        string c;
        cin >> c;

        set<int> f(cc.begin(), cc.end());
        vector<int> g(f.begin(), f.end());
        sort(g.begin(), g.end());
        sort(c.begin(), c.end());

        map<int, char> count;
        for (size_t i = 0; i < g.size(); ++i) {
            count[g[i]] = c[i];
        }

        for (const auto &kv : count) {
            x[kv.first - 1] = kv.second;
        }

        cout << x << endl;
    }

    return 0;
}