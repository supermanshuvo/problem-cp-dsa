/* 
* 1^2+2^2+3^2+...+ n^2
 */
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += (i * i);
    }
    cout << sum << endl;
    return 0;
}