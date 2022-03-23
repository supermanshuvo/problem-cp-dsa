/**
 * @file problem4.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief find problem set 1 more then one by one
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int maxOne = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int n = arr[i];
        if(n == 1){
            sum++;
        }else{
            if(sum>maxOne)
                maxOne = sum;
            sum = 0;
        }
    }
    cout << maxOne << endl;
    return 0;
}