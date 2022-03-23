/**
 * @file timus-1025.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    int k;
    cin >> k;
    for (int i = 0; i < k;i++){
        cin >> a[i];
    }
    sort(a, a + k);
    int cnt = 0;
    for (int i = 0; i <= k / 2; i++){
        cnt += a[i] / 2 + 1;
    }
    cout << cnt << endl;
    return 0;
}