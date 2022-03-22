/**
 * @file timus-1149.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

void A(int n, int pos){
    printf("sin(%d",pos);
    cout << "sin(" << pos;
    if (pos < n)
    {
        if(pos & 1) putchar('-');
        else putchar('+');
        
        A(n,pos + 1);
    }

    putchar(')');
}

void S(int n, int pos){
    if(pos < n){
        putchar('(');
        S(n,pos + 1);
        putchar(')');
    }
    A(n + 1 - pos,1);
    printf("+%d",pos);
}

int main(){
    int N;
    
    scanf("%d",&N);
    
    S(N,1);
    
    return 0;
}