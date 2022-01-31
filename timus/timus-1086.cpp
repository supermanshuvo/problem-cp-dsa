/**
 * @file timus-1086.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Cryptography
 * Test input : 4 3 2 5 7
 * Test OUtput : 5 3 11 17
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
#define MAX_N 164000
bool isPrime[MAX_N];
int ans[15000], sz;
int main() {
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    ans[0] = 2;
    sz = 1;
    for (int i = 3; i < MAX_N && sz < 15000; i+=2){
        if(isPrime[i]){
            ans[sz] = i;
            ++sz;
            if(i<MAX_N/i){
                for (int j = i * i; j < MAX_N; j+=i){
                    isPrime[j] = false;
                }
            }
        }
    }
    int T, ind;
    cin >> T;
    while(T--){
        cin >> ind;
        cout << ans[ind - 1] <<endl;
    }
    return 0;
}