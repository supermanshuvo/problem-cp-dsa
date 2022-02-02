/**
 * @file lightOj-1107.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief How Cow
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x1,y1,x2,y2;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        int M;
        cin >> M;
        cout << "Case " << i << ":" << endl;
        while (M--)
        {
            int x, y;
            cin >> x >> y;
            if(x>x1 && y>y1 && x<x2 && y<y2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
        return 0;
}