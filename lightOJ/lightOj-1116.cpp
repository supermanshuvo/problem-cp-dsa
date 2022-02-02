/**
 * @file lightOj-1116.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Ekka Dokka
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * Input	Output
    3       
    10  Case 1: 5 2
    5   Case 2: Impossible
    12  Case 3: 3 4

    got wrong answer
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        long w,n,m;
        cin >> w;
        if(w%2!=0){
            cout << "Case " << i << ": Impossible" << endl;
        }else{
            n = w / 2;
            m = 2;
            while(n%2==0){
                n /= 2;
                m *= 2;
            }
            cout << "Case " << i << ": " << n << " " << m << endl;
        }
    }
        return 0;
}