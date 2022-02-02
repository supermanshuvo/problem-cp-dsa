/**
 * @file lightOj-1001.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Opposite Task
 * Test Input : 3 10 7 7 
 * Test Output : 0 10, 0 7, 1 6
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        if (n > 10)
            cout << "10 " << n - 10 << endl;
        else
            cout << "0 " << n << endl;
    }
    return 0;
}