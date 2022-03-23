/**
 * @file lightOj-1189.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int factorial[20]={},k=1;
    factorial[0] = 1;

    for(long long int i=1; i<=20; i++)
    {
        factorial[i] = i*k;
        k = factorial[i];
    }
    int testcase;
    cin>>testcase;
    for(int j=1; j<=testcase; j++)
    {
        long long int n;
        cin>>n;
        vector<int>answer;
        for(int i=20; i>=0; i--)
        {
            if(factorial[i]<=n)
            {
                n-=factorial[i];
                answer.push_back(i);
            }

        }
        cout<<"Case "<<j<<": ";
        if(n==0)
        {
            for(int i=answer.size()-1; i>0; i--)
            {
                cout<<answer[i]<<"!+";
            }
            cout<<answer[0]<<"!\n";
        }
        else
            cout<<"impossible\n";
    }
    return 0;
}