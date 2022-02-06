/**
 * @file problem3.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Sorting array
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    for (int i = 1; i < n;i++){
        for (int j = 0; j < n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}