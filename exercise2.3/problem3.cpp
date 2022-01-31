#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a > b)
        b = a;
    cout << b << endl;
    return 0;
}