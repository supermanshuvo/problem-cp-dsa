/* 
* 1+(2+3)+(4+5+6)+...+ nth term
 */
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, sum = 0, num = 1;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            sum+=num++;
        }
    }
    cout << sum << endl;
    return 0;
}