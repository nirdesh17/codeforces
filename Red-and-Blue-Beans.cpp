#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if(d>=(abs(r-b)))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    }
    
    return 0;
}