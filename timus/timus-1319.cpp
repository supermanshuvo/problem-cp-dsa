#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int M[100][100],x = 0;
    
    for(int i = 0;i<2*N-1;++i){
        for(int r = 0;r<=i && r<N;++r){
            int c = i-r;
            if(c>=0 && c<N) M[r][c] = ++x;
        }
    }
    
    for(int i = 0;i<N;++i){
        for(int j = N-1;j>=0;--j) cout<< M[i][j]<<" ";
        cout << endl;
    }

    return 0;
}