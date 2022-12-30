#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int Max;
        Max=max(a,max(b,c));
        if(a==b && b==c)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==b && a>c)
        {
            cout<<abs(a-a+1)<<" "<<abs(a-b)+1<<" "<<abs(a-c)+1<<endl;
        }
         else if(b==c && b>a)
        {
            cout<<abs(b-a)+1<<" "<<abs(b-b)+1<<" "<<abs(b-c)+1<<endl;
        }
         else if(a==c && a>b)
        {
            cout<<abs(a-a+1)<<" "<<abs(a-b)+1<<" "<<abs(a-c)+1<<endl;
        }
        else if(Max==a)
        {
            cout<<abs(a-a)<<" "<<abs(a-b)+1<<" "<<abs(a-c)+1<<endl;
        }
        else if(Max==b)
        {
            cout<<abs(a-b)+1<<" "<<abs(b-b)<<" "<<abs(b-c)+1<<endl;
        }
        else if(Max==c)
        {
            cout<<abs(a-c)+1<<" "<<abs(c-b)+1<<" "<<abs(c-c)<<endl;
        }
    }
    return 0;
}