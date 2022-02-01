/**
 * @file lightOj-1022.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Circle in Square
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t;i++){
        double r,pi=2.0 * acos(0.0);
        cin>>r;
        double result = pow((2 * r), 2) - pi * pow(r, 2);
        cout << "Case " << i << ": "<<fixed<<setprecision(2) << result << endl;
    }
    return 0;
}