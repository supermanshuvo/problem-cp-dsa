#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    float s=(a+b+c)/2;
    float ans = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area : " << ans << endl;
    return 0;
}