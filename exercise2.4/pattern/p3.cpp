/* 
    ..*..
    .***.
    *****
*/
#include <iostream>
using namespace std;
int main(){
    int min_stars = 1;
    int p_height;
    cin >> p_height;
    int p_space = p_height -1;
    int i, j, k;
    for (i = 0;i<p_height;i++){
        for (j = p_space; j > i;j--)
            cout << " ";
        for (k = 0;k<min_stars;k++)
            cout << "*";
        min_stars += 2;
        cout << endl;
    }
    return 0;
}