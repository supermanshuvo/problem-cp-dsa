/**
 * @file problem1.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Decimal to Binary
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/* #include <iostream>
using namespace std;
int main(){
    int n, arr[31],i=0;
    cin >> n;
    if(n==0){
        cout << "Binary string is 0";
    }else{
        while(n>0){
            arr[i] = n % 2;
            i++;
            n /= 2;
        }
        for (int j = i - 1; j >= 0;j--){
            cout << arr[j];
        }
    }
    return 0;
} */
// Solution 2
#include <iostream>
using namespace std;
void decToBinary(int n){
    bool binaryNum[32];
    int i = 0;
    while(n>0){
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0;j--){
        cout << binaryNum[j];
    }
}
int main(){
    int n;
    cin >> n;
    decToBinary(n);
    return 0;
}