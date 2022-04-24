/**
 * @file lightOj-1338.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string a,b;
    cin>>t;
    getline(cin,a);
    for(int i=0; i<t; i++){
        getline(cin, a);
        getline(cin, b);
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        a.erase(remove(a.begin(), a.end(), ' '), a.end());
        b.erase(remove(b.begin(), b.end(), ' '), b.end());
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) {
            cout << "Case " << i + 1 << ": Yes\n";
        } else {
            cout << "Case " << i + 1 << ": No\n";
        }
    }
    return 0;
}