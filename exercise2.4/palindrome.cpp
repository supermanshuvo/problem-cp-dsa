/**
 * @file palindrome.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Palindrome 1,2,3,4,5,6,7,8,9,11,22,33,44,66,121...n;
 *  n=10^9;
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int n,rev=0,temp;
    cin >> n;
    temp = n;
    while(n > 0){
        int digit = n % 10;
        rev=(10*rev) + digit;
        n /= 10;
    }
    if(temp == rev)
        cout << "Palindrome Number : " << rev << endl;
    else
        cout << "Not Palindrome number" << rev << endl;
    return 0;
}