/**
 * @file lexicographically.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-20
 * @link https://www.geeksforgeeks.org/lexicographical_compare-in-cpp/
 * @reference geeksforgeeks
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<algorithm>
using namespace std;
  
int main()
{
    char one[] = "geeksforgeeks";
    char two[] = "gfg";
      
    if( lexicographical_compare(one, one+13, two, two+3))
    {
        cout << "geeksforgeeks is lexicographically less than gfg";
    }
    else
    {
        cout << "geeksforgeeks is not lexicographically less than gfg";
    }
    return 0;
}