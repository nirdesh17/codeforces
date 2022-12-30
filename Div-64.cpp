#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    string s;
    cin>>s;
    int one=0,zero=0;
    int n;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            one++;
            n=i;
            break;
        }
    }
    if(one>0)
    {
        for(int i=n;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            if(zero>6)
            {
                break;
            }
        }
    }
    if(one>=1 && zero>=6)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}