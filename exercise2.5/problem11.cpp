/**
 * @file problem11.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief lexicographically smaller
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(){
    char slash_dummy;
    int day, month, year;
    cin >> day >> slash_dummy >> month >> slash_dummy >> year;
    cout << day << slash_dummy << month << slash_dummy << year << endl;
    return 0;
}