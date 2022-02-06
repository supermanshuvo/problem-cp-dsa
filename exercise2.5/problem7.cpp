/**
 * @file problem7.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief count A - Z = ? and a - z = ?
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upperCase = 0, lowerCase = 0;
    for (int i = 0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
            upperCase++;
        if (s[i]>='a' && s[i]<='z')lowerCase++;
    }
    cout << upperCase << " " << lowerCase << endl;
    return 0;
}