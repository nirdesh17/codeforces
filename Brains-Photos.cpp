#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    char C='C',M='M',Y='Y',W='W',G='G',B='B';
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>a[i][j];
        }
    }
    int color=0,black=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==C || a[i][j]==M || a[i][j]==Y)
            {
                color++;
            }
            else
            {
                black++;
            }
        }
    }
    if(color>0)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}