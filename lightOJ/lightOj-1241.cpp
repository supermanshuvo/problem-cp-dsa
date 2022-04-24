/**
 * @file lightOj-1241.cpp
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
    int t, n, lie, i, arr[12];
    arr[0] = 2;
    cin >> t;
    for (int j = 1; j <= t;j++){
        cin >> n;
        for (i = 1; i <= n;i++){
            cin >> arr[i];
        }
        for(i=0,lie=0; i<n; i++) {
            if(arr[i+1]>arr[i])lie+=ceil(((double)arr[i+1]-arr[i])/5);
        }
        cout << "Case " << j << ": " <<lie<< endl;
    }
    return 0;
}