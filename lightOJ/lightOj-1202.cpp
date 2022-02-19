/**
 * @file lightOj-1202.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Bishops
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t;i++){
        int r1, r2, c1, c2;
        cin>>r1>>c1>>r2>>c2;
        int c = abs(c1 - c2);
        int r = abs(r1 - r2);
        if(r == c){
            cout << "Case " << i << ": 1" << endl;
        }else{
            if(r%2 == c%2){
                cout << "Case " << i << ": 2" << endl;
            }else{
                cout << "Case " << i << ": impossible" << endl;
            }
        }
    }
    return 0;
}