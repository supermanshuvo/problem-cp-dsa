/**
 * @file lightOj-1211.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Intersection of Cubes
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,x1,y1,z1,x2,y2,z2,xCommon,yCommon,zCommon;
    cin >> T;
    for (int i = 1; i <= T;i++){
        int n;
        int xFar = 0, yFar = 0, zFar = 0;
        int xNear = 1001, yNear = 1001, zNear = 1001;
        cin >> n;
        for (int j = 1; j <= n;j++){
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            if(x1>xFar)
                xFar = x1;
            if(y1>yFar)
                yFar = y1;
            if(z1>zFar)
                zFar = z1;
            if (x2 < xNear)
                xNear = x2;
            if (y2 < yNear)
                yNear = y2;
            if (z2 < zNear)
                zNear = z2;
        }
        xCommon = (xNear - xFar);
        yCommon = (yNear - yFar);
        zCommon = (zNear - zFar);
        if (xCommon > 0 && yCommon > 0 && zCommon > 0)
            cout << "Case " << i << ": " << xCommon * yCommon * zCommon << endl;
        else
            cout << "Case " << i << ": 0" << endl;
    }
    return 0;
}