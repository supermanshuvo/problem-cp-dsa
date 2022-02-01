/**
 * @file lightOj-1069.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Lift
 * Input :	
    3
    1 2
    3 10
    5 5
 * Output:
    Case 1: 27
    Case 2: 59
    Case 3: 39
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
    for (int i = 1; i <= t;i++){
        int myPosition, liftPosition;
        cin >> myPosition >> liftPosition;
        int comingLiftToMe = abs(myPosition - liftPosition) * 4;
        int openDorAndCloseDoor = 3;
        int enterAndExit = 5;
        int down = myPosition * 4;
        int result = comingLiftToMe + openDorAndCloseDoor + enterAndExit + openDorAndCloseDoor + down + openDorAndCloseDoor + enterAndExit;
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}