//#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int dis_letter = 0;
    char alpha = 'a';
    int letter = 0;
    
    //sort(s.begin(), s.end());
    while(alpha<='z') {
        letter = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i]==alpha)
                letter = 1;
        }
        dis_letter += letter; 
        alpha++; 
    }
    if(dis_letter%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}