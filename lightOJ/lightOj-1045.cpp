/**
 * @file lightOj-1045.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    double memo[1000001];
    memo[0] = 0;
    for (int i = 1; i <= 1000000;i++){
        memo[i] = memo[i - 1] + log(i);
    }
    int t, base;
    long n, result;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n >> base;
        result = memo[n] / log(base) + 1;
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}