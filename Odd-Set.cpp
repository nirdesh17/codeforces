#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for (int i = 0; i < test; i++)
    {
        int n,odd=0,even=0;
        cin>>n;
        int a[2*n];
        for (int j = 0; j < 2*n; j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
             {even=even+1;}
            else
             {odd=odd+1; }
        }
        if (even==odd)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        
    }
    
    return 0;
}