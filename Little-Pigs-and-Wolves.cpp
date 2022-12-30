#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    char w='W',p='P',a='.';
    char b[n][m];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    ll count=0;
    
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(j<m-1 &&(b[i][j]==w && b[i][j+1]==p))
            {
                count++;
            }
            else if(j>0 &&(b[i][j]==w && b[i][j-1]==p))
            {
                count++;
            }
            else if(i>0 &&(b[i][j]==w && b[i-1][j]==p))
            {
                count++;
            }
            else if(i<n-1 &&(b[i][j]==w && b[i+1][j]==p))
            {
                count++;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}