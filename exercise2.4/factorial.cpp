/**
 * @file factorial.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief n!(Factorial)
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long double factorial = 1.0;
    if(n<0){
        cout << "Enter more then 0 not negative numbers";
    }else {
        for (int i = 1; i <= n;i++){
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }
    return 0;
}