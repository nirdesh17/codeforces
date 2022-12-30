#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,count=0;
    char pc;
    cin>>n>>m>>pc;
    char a[n][m];
    bool mark[100];
    for(char i='A';i<='Z';i++)
    mark[i]=0;

    mark['.']=1;
    mark[pc]=1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]==pc)
            {
                if(j+1<m && mark[a[i][j+1]]==0)
                {
                    count++;
                    mark[a[i][j+1]]=1;
                }
                if(j-1>=0 && mark[a[i][j-1]]==0)
                {
                    count++;
                    mark[a[i][j-1]]=1;
                }
                if(i+1<n && mark[a[i+1][j]]==0)
                {
                    count++;
                    mark[a[i+1][j]]=1;
                }
                if(i-1>=0 && mark[a[i-1][j]]==0)
                {
                    count++;
                    mark[a[i-1][j]]=1;
                }
            }
            
        }
    }
    cout<<count<<endl;
    return 0;
}