/**
 * @file lightOj-1294.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Positive Negative Sign
 * @version 0.1
 * @date 2022-02-04
 *  
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 1; i <= T;i++){
        long n,m;
        cin >> n >> m;
        long sum = (n / 2) * m;
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}