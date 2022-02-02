/**
 * @file timus-1209.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 1, 10, 100, 1000...
 * testing Input : 4 3 14 7 6
 * testing Output : 0 0 1 0
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t, k;
    long long int n;
    bool space = false;
    cin >> t;
    while(t--){
        cin >> k;
        n = (-1 + sqrt(double(8 * k - 7))) / 2.0;
        if(space){
            cout << " ";
            space = true;
        }
        if(k==n*(n+1)/2+1)
            cout << '1'<<endl;
        else
            cout << '0'<<endl;
    }
    cout << endl;
    return 0;
}