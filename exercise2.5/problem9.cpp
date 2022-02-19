/**
 * @file problem9.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Bangladesh Fully into Bangladesh in desh
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string>
using namespace std;
int countFreq(string &pat, string &txt){
    int M = pat.length();
    int N = txt.length();
    int res = 0;
    for (int i = 0; i <= N - M;i++){
        int j;
        for (j = 0; j < M; j++)
        {
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==M){
            res++;
        }
    }
    return res;
}
int main() {
    string s, s1;
    cin >> s >> s1;
    cout << countFreq(s1, s) << endl;
    return 0;
}