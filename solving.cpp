#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long t,i,n;
    cin >> t;
    for( i=1;i<=t;i++){
        cin >>n;
        long int row = (sqrt(1+4*2*n)-1)/2;
        cout << row << endl;
    }
    return 0;
}