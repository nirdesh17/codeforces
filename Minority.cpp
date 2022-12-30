#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        char a='1',b='2';
        int one=0,zero=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==a)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(one>zero)
        {
            cout<<zero<<endl;
        }
        else if(zero>one)
        {
            cout<<one<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}