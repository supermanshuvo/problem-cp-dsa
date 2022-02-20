/**
 * @file problem12.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Subsequence
 * @version 0.1
 * @date 2022-02-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string>
using namespace std;
bool subseq(string A,string B){
    if(A.size()<B.size())
        return 0;
    int j = 0;
    int b_len = B.size();
    for (int i = 0;i<A.size();i++){
        if(B[j]==A[i]){
            j++;
        }
    }
    if(b_len==j)
        return 1;
    else return 0;
}
int main(){
    string A, B;
    cin >> A >> B;
    bool resutl = subseq(A, B);
    if(resutl)
        cout << "B is complete A subsequence" << endl;
    else cout << "B is not A subsequence" << endl;
    return 0;
}