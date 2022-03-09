/**
 * @file timus-1020.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
float pi = 3.1415926;
float dist(float x1, float y1, float x2, float y2) {
    float dx = x1-x2;
    float dy = y1-y2;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    int n;
    float r;
    cin >> n >> r;
    float len = 0, points[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> points[i][0] >> points[i][1];
        if (i > 0)
            len += dist(points[i][0], points[i][1], points[i - 1][0], points[i - 1][1]);
    }
    len += dist(points[0][0], points[0][1], points[n-1][0], points[n-1][1]);
    len += 2.0*pi*r;
    cout << setprecision(2) << fixed << len << endl;
    return 0;
}