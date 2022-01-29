/**
 * @file p5.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * ..*..
 * .***.
 * *****
 * .***.
 * ..*..
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
int main(){
    int min_stars = 1;
    int p_height;
    cin >> p_height;
    int p_space = p_height - 1;
    for (int i = 0; i < p_height; i++)
    {
        for (int j = p_space; j > i; j--)
            cout << " ";
        for (int k = 0; k < min_stars; k++)
            cout << "*";
        min_stars += 2;
        cout << endl;
    }
    p_space = p_height - 1;
    for (int i = 0; i < p_height-1; i++)
    {
        min_stars -= 2;
        for (int j = i; j <p_space; j++)
            cout << " ";
        for (int k = 0; k < min_stars; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}