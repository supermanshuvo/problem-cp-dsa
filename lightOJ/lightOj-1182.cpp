/**
 * @file lightOj-1182.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Parity
 * Test input: 2    Output:
 *             21           Case 1: odd
 *             6            Case 2: even
 * get Memory Limit Exceeded then change the size of the memory
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int binary(int n){
    int num[10000],j=0,sum=0;
    for (int i = 0; i < 10000 + 1; i++)
        num[i] = 0;
    if (n == 0)
        return 0;
    while (n > 0)
    {
        num[j] = n % 2;
        n /= 2;
        j++;
    }
    int num_len = sizeof(num)/sizeof(num[0]);
    for (int i = 0; i < num_len;i++){
        if (num[i] > 0){
            sum++;
        }
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int n;
        cin >> n;
        int one = binary(n);
        if (one % 2 == 0)
        {
            cout << "Case "<<i<<": "<<"even" << endl;
        }
        else
        {
            cout << "Case "<<i<<": "<<"odd" << endl;
        }
    }
        return 0;
}