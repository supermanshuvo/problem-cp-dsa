/**
 * @file lightOj-1015.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Brush (I)
 * Test Input : 2
 *              3 1 5 10
 *              2 1 99
 * Test Output : Case 1: 16
 *               Case 2: 100
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t;i++)
    {
        int N,num,sum=0;
        cin>>N;
        for(int j=1;j<=N;j++){
            cin>>num;
            if(num>0){
                sum+=num;
            }
        }
        cout<<"Case "<<i<<": " << sum << endl;
    }
    return 0;
}