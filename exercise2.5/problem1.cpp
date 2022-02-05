/**
 * @file problem1.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Decimal to Binary
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(){
    int n, arr[31],i=0;
    cin >> n;
    if(n==0){
        cout << "Binary string is 0";
    }else{
        while(n>0){
            arr[i] = n % 2;
            i++;
            n /= 2;
        }
        // cout << "Binary String is : ";
        for (int j = i - 1; j >= 0;j--){
            cout << arr[j];
        }
    }
    return 0;
}