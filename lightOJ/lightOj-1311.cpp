/**
 * @file lightOj-1311.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Unlucky Bird
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin>> testCase;
    double v1,v2,v3,a1,a2,t1,t2,t3, bird, trains;
    for(int i = 1; i <= testCase; i++){
        cin>>v1>>v2>>v3>>a1>>a2;
        t1 = v1/a1;
        t2 = v2/a2;
        t3 = t1;
        if(t1 < t2)
            t3 = t2;
        bird = v3 * t3;
        trains = v1 * t1 - .5 * a1 * t1 * t1;
        trains += v2 * t2 - .5 * a2 * t2 * t2;
        cout << "Case " << i << ": "<<fixed<<setprecision(10) << trains << " " << bird << endl;
    }
    return 0;
}