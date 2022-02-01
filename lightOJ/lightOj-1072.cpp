/**
 * @file lightOj-1072.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Calm Down 
 * sin(β) = CF/(AE-CE) 
           = r/(R-r)
        =>  sin(π/N) = r/(R-r)
        =>  r = sin(π/N)*(R-r)
            = sin(π/N)*R - sin(π/N)*r
        =>  r + sin(π/N)*r = sin(π/N)*R
        =>  r*(1+ sin(π/N)) = sin(π/N)*R
        =>  r = sin(π/N)*R/(1+ sin(π/N))
        So, r = sin(π/N)*R/(1+ sin(π/N))
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    double pi = 2 * acos(0.0);
    cin >> t;
    for (int i = 1; i <= t; i++){
        double R;
        int n;
        cin >> R >> n;
        double r = (R * sin(pi / n * 1.0)) / (1 + sin(pi / n * 1.0));
        cout << "Case " << i << ": " << fixed << setprecision(10) << r << endl;
    }
        return 0;
}