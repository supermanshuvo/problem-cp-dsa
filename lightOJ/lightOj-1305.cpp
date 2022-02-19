/**
 * @file lightOj-1305.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Area of a Parallelogram
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, ax, ay, bx, by, cx, cy, dx, dy, a;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx = ax + cx - bx;
        dy = ay + cy - by;
        a = 0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax)));
        if (a < 0)
            a *= -1;
        cout << "Case " << i << ": " << dx << " " << dy << " " << a << endl;
    }
    return 0;
}