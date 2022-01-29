/**
 * @file p4.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Pyramid Design 
 *          12321
 *          .121.
 *          ..1..
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(){
    int n,space=1;
    cin >> n;
    for (int i = n; i >= 1; i--){
        for (int s = 1; s <= space; s++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int k = i - 1; k >= 1; k--)
            cout << k;
        cout << endl;
        space++;
    }
    return 0;
}