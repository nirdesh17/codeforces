#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int  n=0,p=1;
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(name[i]==name[j])
            {
             n++;
            }
        }
        if(n==0)
        {
            p++;
        }
        n=0;
    }
    p=p-1;
    if(p%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
  
    return 0;
}