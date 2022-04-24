/**
 * @file lightOj-1225.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<cmath>
using namespace std;
bool isPalindrom(int n){
    int rev=0;
    int s = n;
    while (n > 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n /= 10;
    }
    if(s==rev)
        return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t;i++){
        int n;
        cin >> n;
        bool p = isPalindrom(n);
        if(p)
            cout << "Case " << i << ": Yes" << endl;
        else cout << "Case " << i << ": No" << endl;
    }
        return 0;
}