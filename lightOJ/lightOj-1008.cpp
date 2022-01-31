/**
 * @file lightOj-1008.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Fibsieve's Fantabulous Birthday
 * Test Input : 3 
 * 8 20 25
 * Test Output : Case 1: 2 3
 * Case 2: 5 4
 * Case 3: 1 5
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    for (int i = 1; i <= cases; i++){
        long long int second, root, lackings, row, column;
        cin>>second;
        root = ceil(sqrt(second * 1.0));
        // cout<<root<<endl;
        lackings = root * root - second;
        // cout << lackings << endl;
        if (lackings < root)
        {
            row = root;
            column = lackings + 1;
        }
        else{
            column = root;
            row = second - (root - 1) * (root - 1);
        }
        if(root%2 == 0){
            long long temp = column;
            column = row;
            row = temp;
        }
        cout << "Case " << i << ": " << column << " " << row << endl;
    }
        return 0;
}
