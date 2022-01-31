/**
 * @file factorial2.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Factorial (n!)/(r!*(n-r)!)
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int fact(int n){
    int res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}
int nCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}
int main(){
    int n,r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}