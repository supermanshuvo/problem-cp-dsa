/**
 * @file lightOj-1387.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,sum;
    string op;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;sum =0;
        cout<<"Case "<< i << ":"<<endl;
        for(int j=1;j<=n;j++){
            cin>>op;
            if(op=="donate"){
                cin>>k;
                sum+=k;
            }else{
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}