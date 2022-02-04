/**
 * @file uva-100.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief The 3n + 1 problem
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int cycle(int n){
    int sum = 0;
    while(n>0){
        sum++;
        if(n==1)
            break;
        else if(n%2)
            n = (3 * n) + 1;
        else
            n /= 2;
    }
    return sum;
}
int main(){
    int m,n ;
    while(cin>>m>>n){
        int max = 0;
        if(m>n){
            int temp = m;
            m = n;
            n = temp;
        }
        int sum = 0;
        for (int i = m; i <= n;i++){
            sum = cycle(i);
            if(sum>max)
                max = sum;
        }
        cout << m <<" " << n <<" " << max << endl;
    }
}