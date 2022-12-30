#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int a=0,b=0;  // a=++ =+-,b=-+ =--,
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>0 )
        {
            a++;
        }
        else 
        {
            b++;
        }
    }
    if(a==1 || b==1)
    {
        cout<<"YES"<<endl;
    }   
    else if(a==0 || b==0)
    {
        cout<<"YES"<<endl;
    } 
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}