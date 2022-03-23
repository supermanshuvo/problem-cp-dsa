/**
 * @file problem5.cpp
 * @author supermanswerhuvo (shuvothesuperman@gmail.com)
 * @brief sum of i - j sort in array
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
int main() {
    int questionNumber;
    cin >> questionNumber;
    int answer[questionNumber];
    int k = 0;
    while (questionNumber--)
    {
        int m, n;
        cin >> m >> n;
        int sum = 0;
        for (int i = m; i <= n; i++)
        {
            sum += i;
        }
        answer[k]=sum;
        k++;
    }
    for (int i = 0; i <k;i++)
        cout << answer[i] << " ";
    return 0;
}