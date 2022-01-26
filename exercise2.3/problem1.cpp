#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int reverse = 0,tamp=n;
    while(n>0){
        int digit = n % 10;
        reverse = (10 * reverse) + digit;
        n /= 10;
    }
    if(tamp==reverse) cout<< "Palindrome :"<<reverse << endl;
    else cout<< "Not Palindrome :" << reverse << endl;
    return 0;
}