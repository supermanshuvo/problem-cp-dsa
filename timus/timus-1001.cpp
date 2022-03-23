/**
 * @file timus-1001.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<vector>
#include <cmath>
#include<iomanip>
using namespace std;
int main(){
    vector<double> v;
    double n;
    while(cin>>n)
        v.push_back(n);
    long i = v.size() - 1;
    while(i>=0){
        cout << setprecision(4) << fixed << sqrt(v[i]) << endl;
        i--;
    }

    return 0;
}