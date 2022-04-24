/**
 * @file lightOj-1006.cpp
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
    long long t, n;
    cin >> t;
    for (int i = 1; i <= t;i++){
        long long arr[10009];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>n;
        for (int j = 6; j <= n;j++){
            arr[j] = (arr[j - 1] + arr[j - 2] + arr[j - 3] + arr[j - 4] + arr[j - 5] + arr[j - 6]) % 10000007;
        }
        cout << "Case " << i << ": " << arr[n] % 10000007 << endl;
    }
    return 0;
}