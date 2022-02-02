/**
 * @file timus-1083.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief Factorials!!!
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,l,ans=1;
   string x;
   cin>>n>>x;
   l=x.size();
   while(n>1)
   {
       ans=ans*n;
       n=n-l;
   }
    cout<<endl<<ans<<endl;
    return 0;
}