/**
 * @file lightOj-1136.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Division by 3
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int testcase;
long long A, B;
long long numbers_divisible_by_3_from_1_to_n(int n)
{
    if(n==0)
        return 0;
    int subs;
    if(n%3==0){
        subs = n / 3;
    }else{
        subs = (n / 3) + 1;
    }
    return n - subs;
}
int main(){
    cin >> testcase;
    for (int i = 1; i <= testcase;i++){       
        cin >> A >> B;
        long long result = numbers_divisible_by_3_from_1_to_n(B) - numbers_divisible_by_3_from_1_to_n(A - 1);
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}