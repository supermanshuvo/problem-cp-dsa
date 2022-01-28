#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a>=b){
        if(b>=c)
            cout << c <<" " << b << " " << a << endl;
        else if(a>=c)
            cout << b <<" " << c << " " << a << endl;
        else
            cout << b << " " << a << " "<< c << endl;
    }
    else if (b >= c)
    {
        if(a>=c)
            cout << c <<" " << a << " " << b << endl;
        else
            cout << a <<" " << c << " " << b << endl;
    }
    else if (c >= a){
        cout << a <<" " << b << " " << c << endl;
    }
    else {
        cout << c << " " << a << " " << b << endl;
    }
    return 0;
}