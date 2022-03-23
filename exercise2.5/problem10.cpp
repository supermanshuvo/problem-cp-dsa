/**
 * @file problem10.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief count the string word and output the number
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if((s[i]>=65 && s[i]<=90) ||(s[i]>=97 && s[i]<=122)){
            count++;
            while((s[i]>=65 && s[i]<=90) ||(s[i]>=97 && s[i]<=122)){
                i++;
            }
        }
    }
    cout << count << endl;
    return 0;
}