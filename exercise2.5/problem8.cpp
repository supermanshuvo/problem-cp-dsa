/**
 * @file problem8.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief add two word together like water + melon = watermelon;
 * @version 0.1
 * @date 2022-02-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;
int main(){
    string oneWord, twoWord, lastWord;
    cin >> oneWord >> twoWord;
    lastWord = oneWord + twoWord;
    cout << lastWord << endl;
    return 0;
}