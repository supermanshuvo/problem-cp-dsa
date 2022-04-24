/**
 * @file lightOj-1133.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  ts,cs=1;
    scanf("%ld",&ts);
    while(ts--)
    {
        long a,b,k,i,ar[105]= {0},ar1[105]= {0},y,z;
        char ch[10]= {0};
        scanf("%ld",&a);
        scanf("%ld",&b);
        for(i=0; i<a; i++)
        {
            scanf("%ld",&ar[i]);
        }
        long d,i1;
        for(i=1; i<=b; i++)
        {
            scanf("%s",ch);
            if(strcmp(ch,"S")==0)
            {
                cin>>d;
                for(i1=0; i1<a; i1++)
                {
                    ar[i1]=ar[i1]+d;
                }
            }
            if(strcmp(ch,"M")==0)
            {
                cin>>d;
                for(i1=0; i1<a; i1++)
                {
                    ar[i1]=ar[i1]*d;
                }
            }
            if(strcmp(ch,"D")==0)
            {
                cin>>d;
                for(i1=0; i1<a; i1++)
                {
                    ar[i1]=ar[i1]/d;
                }
            }
            if(strcmp(ch,"R")==0)
            {
                k=0;
                for(i1=a-1; i1>=0; i1--)
                {
                    ar1[k++]=ar[i1];
                }
                for(i1=0; i1<a; i1++)
                {
                    ar[i1]=ar1[i1];
                }
            }
            if(strcmp(ch,"P")==0)
            {
                cin>>y>>z;
                swap(ar[y],ar[z]);
            }
        }
        printf("Case %ld:\n",cs++);
        for(i=0; i<a; i++)
        {
            if(i==0)
                cout<<ar[i];
            else
                cout<<" "<<ar[i];
        }
        cout<<endl;
    }
    return 0;
}