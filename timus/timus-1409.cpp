#include <bits/stdc++.h>
using namespace std;
int main(){
    int ALL, H, L, HR,LR;
    cin >> H >> L;
    ALL = H + L - 1;
    HR = ALL - L;
    LR = ALL - H;
    cout << LR << " " << HR << endl;
    return 0;
}