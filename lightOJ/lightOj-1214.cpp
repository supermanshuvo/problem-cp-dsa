/**
 * @file lightOj-1214.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string a;
        int b;
        cin>>a>>b;
        int j=0;
        if (a[0] == '-') j = 1;
        if(b<0)b=abs(b);
        long rim = 0;
        for( ; j < a.size();j++){
            rim=rim*10+(a[j]-'0');
            rim %=b;
        }
        if(rim==0)cout<<"Case "<<i<<": divisible"<<endl;
        else cout<<"Case "<<i<<": not divisible"<<endl;
    }
    return 0;
}