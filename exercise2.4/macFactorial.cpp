/**
 * @file macFactorial.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Formula Used : 
 * cos x = 1 – (x2 / 2 !) + (x4 / 4 !) – (x6 / 6 !) +…
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
const double PI = 3.142125;
double cosXSert(double x,int n){
    x = x * (PI / 180.0);
    double res = 1;
    double sign = 1, fact = 1, pow = 1;
    for (int i = 1; i < n; i++){
        sign = sign * -1;
        fact = fact * (2 * i - 1) * (2 * i);
        pow = pow * x * x;
        res = res + sign * pow / fact;
    }
    return res;
}
int main(){
    float x;
    int n;
    cin >> x >> n;
    cout << cosXSert(x, n) << endl;
    return 0;
}