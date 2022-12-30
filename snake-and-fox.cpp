#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<"\n";
        }
        else
        {
          for(int j=0;j<m-1;j++)
            {
                cout<<".";
            }
            cout<<"#\n";
        }
    }
    return 0;
}