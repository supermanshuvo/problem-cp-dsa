/* 
    * 1*n+2*(n-1)+...+n*1
*/
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++){
        int digit = i * (n - i + 1);
        sum += digit;
    }
    cout << sum << endl;
    return 0;
}