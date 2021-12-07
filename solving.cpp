#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        long int result = (((((n*567)/9)+7492)*235)/47)-498;
        int output = abs((result%100)/10);
        cout<< output <<endl;
    }
    return 0;
}