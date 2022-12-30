#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a[4][4];
    for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    bool yes=false;
    for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<4;j++)
        {
            if(a[i][j]=='.')
            {
                if(a[i][j-1]=='#' && a[i-1][j]=='#' && a[i-1][j-1]=='#' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
                else if(a[i][j+1]=='#' && a[i-1][j]=='#' && a[i-1][j+1]=='#' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
                else if(a[i+1][j]=='#' && a[i][j+1]=='#' && a[i+1][j+1]=='#' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
                else if(a[i][j-1]=='#' && a[i+1][j]=='#' && a[i+1][j-1]=='#' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
            }
            else
            {
                if(a[i][j-1]=='.' && a[i-1][j]=='.' && a[i-1][j-1]=='.' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
                else if(a[i][j+1]=='.' && a[i-1][j]=='.' && a[i-1][j+1]=='.' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
                else if(a[i+1][j]=='.' && a[i][j+1]=='.' && a[i+1][j+1]=='.' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
                else if(a[i][j-1]=='.' && a[i+1][j]=='.' && a[i+1][j-1]=='.' && i>0 && j>0 && i<3 && j<3)
                {
                    yes=true;
                    break;
                }
            }
        }
        if(yes)
        break;
    }
    if(yes)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}