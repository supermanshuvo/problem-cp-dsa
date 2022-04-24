/**
 * @file lightOj-1113.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar(); 

    for(int k=1;k<=t;k++)
    {
        cout<<"Case "<<k<<":\n";

        stack<string> FORWARD,BACK;
        string str,url;
        FORWARD.push("http://www.lightoj.com/");
        while(1)
        {
            cin>>str;
            string temp;
            if(str=="VISIT")
            {
                cin>>url;
                if(FORWARD.empty())
                    cout<<"Ignored"<<'\n';
                else
                    {
                       temp=FORWARD.top();
                       FORWARD.pop();
                       BACK.push(temp);
                       while(!FORWARD.empty())
                       {
                           FORWARD.pop();
                       }
                       FORWARD.push(url);
                    }
                cout<<FORWARD.top()<<'\n';
            }
            else if(str=="BACK")
            {

                if(BACK.empty())
                    cout<<"Ignored"<<'\n';
                else
                {
                    temp=BACK.top();
                    BACK.pop();
                    FORWARD.push(temp);
                    cout<<FORWARD.top()<<'\n';
                }
            }
            else if(str=="FORWARD")
            {
                if(FORWARD.size()<2)
                    cout<<"Ignored"<<'\n';
                else
                {
                    temp=FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);
                    cout<<FORWARD.top()<<'\n';
                }
            }
            else if(str=="QUIT") 
                break;
        }
    }
    return 0;
}