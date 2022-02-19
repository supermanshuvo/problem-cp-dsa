/**
 * @file lightOj-1433.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Minimum Arc Distance
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCases, ox, oy, ax, ay, bx, by;
    cin>>testCases;
    double OA, OB, AB, angle;
    for (int i = 1; i <= testCases; i++){
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        OA = sqrt(pow(ax - ox, 2) + pow(ay - oy, 2));
        OB = sqrt(pow(bx - ox, 2) + pow(by - oy, 2));
        AB = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));

        angle = acos((pow(OA, 2) + pow(OB, 2) - pow(AB, 2)) / (2 * OA * OB));
        cout << "Case " << i << ": " <<fixed<<setprecision(10)<< OA * angle << endl;
    }
    return 0;
}