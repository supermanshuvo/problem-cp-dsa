/**
 * @file problem2.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Binary to Decimal
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
long bin2Dec(char binaryString[]){
    long qnum = 0;
    int i = 0;
    int n;
    while (binaryString[i]!=0){{
        n=binaryString[i]-48;
        if(n!=0 && n!=1){
            return -1;
        }
        qnum = (qnum * 2) + n;
        i++;
        }
    }
    return qnum;
}
int main(){
    char binaryChar[32];
    cin>>binaryChar;
    long decNumber=bin2Dec(binaryChar);
    if(decNumber==-1)
        cout << "Invalid" << endl;
    else cout<<decNumber<<endl;
    return 0;
}