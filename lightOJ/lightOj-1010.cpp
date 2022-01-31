/**
 * @file lightOj-1010.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Knights in Chessboard
 * Test input: 3
 *            8 8  
 *            3 7
 *            4 10
 * Test Output: 
 *            Case 1: 32
 *            Case 2: 11
 *            Case 3: 20
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    for (int i = 1; i <= t;i++){
        int m, n,result;
        cin >> m >> n;
        if(m==1 || n==1){
            result = m > n ? m : n;
        }else if(m==2 || n==2){
            result = ((m * n) / 8) * 4 + (((m * n) % 8) >= 4 ? 4 : (m * n) % 8);
        }else{
            result = (m * n + 1) / 2;
        }
        cout<<"Case "<<i<<": "<<result<<endl;
    }
        return 0;
}