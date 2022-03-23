/**
 * @file timus-1005.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 1005. Stone Pile
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>

using namespace std;

int n, num[22], sum=0, ans;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    ans = sum;
    for (int mask = 0; mask < (1<<n); mask++) {
        int s = 0;
        for (int j = 0; j < n; ++j) {
            if((1<<j)&mask) s += num[j];
        }
        ans = min(ans, abs(sum-s*2));
    }
    printf("%d\n",ans);
    return 0;
}