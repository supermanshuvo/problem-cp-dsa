/**
 * @file prime.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 25 Prime number is : 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
int main(){
    long long int n,i;
    cin >> n;
    if(n==2){
        cout << "Prime number : " << n << endl;
        return 0;
    }
    bool isPrime = true;
    for (i = 2; i < n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        cout << "Prime number :" << n << endl;
    else
        cout << "Not Prime number :" << n << endl;
    return 0;
}