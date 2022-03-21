/**
 * @file timus-1044.cpp
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

int N,cont[37];

void solve(int n, int sum){
    if(n==N/2) ++cont[sum];
    else{
        for(int i = 0;i<10;++i)
            solve(n+1,sum+i);
    }
}

int main(){
    scanf("%d",&N);
    
    solve(0,0);
    
    int ans = 0;
    for(int i = 0;i<=36;++i) ans += cont[i]*cont[i];
    
    printf("%d\n",ans);
    
    return 0;
}