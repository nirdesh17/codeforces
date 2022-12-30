#include<bits/stdc++.h>
using namespace std;
using ll = long long;

 void solve()
 {
     ll n;
     cin>>n;
     int rest=0;
     for(ll pw =1;pw<=n;pw=pw*10+1)
     {
         for(ll d=1;d<=9;d++)
         {
             if(pw*d<=n)
             {
                 rest++;
             }
             else
             {
                 break;
             }
         }
     }
     cout<<rest<<endl;
 } 
int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        solve();
    }
    return 0;
}