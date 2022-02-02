/**
 * @file lightOj-1053.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Higher Math
 * Pythagorean theorem will give you the answere but it will not work it will give you wrong answer you can use
 * 
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,arr[3];
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        int hypo = arr[2] * arr[2];
        int other = arr[0] * arr[0] + arr[1] * arr[1];
        cout << "Case " << i << ": " << (hypo == other ? "yes" : "no") << endl;
    }
    return 0;
}