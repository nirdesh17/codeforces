#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for (int i = 0; i < test; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d=2*(abs(a-b));
        int e=abs(a-b);
        if(a>d || b>d || c>d)
        {
            cout<<"-1"<<endl;
        }
        else
        {
           if(c==e)
           {
                cout<<d<<endl;
           }
           else if(c<e)
           {
                cout<<abs(e+c)<<endl;
           }
           else if(c>e)
           {
                cout<<abs(e-c)<<endl;
           }
        }
    }
    
    return 0;
}