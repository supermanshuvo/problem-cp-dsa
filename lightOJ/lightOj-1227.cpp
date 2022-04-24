/**
 * @file lightOj-1227.cpp
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
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,p,q;
        cin>>n>>p>>q;
        int sumOfWeight=0,counter = 0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(counter + 1 <=p && sumOfWeight + x <= q){
                sumOfWeight +=x;
                counter++;
            }
        }
        cout<< "Case "<<i<<": "<<counter <<endl;
    }
    return 0;
}