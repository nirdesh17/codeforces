#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;;
    cin>>n;
    int l=0,r=0;
    char g[n];
    char L='L'; 
    for (int j = 0; j <n; j++)
    {
        cin>>g[j];
        if(g[j]==L)
        {
            l=l+1;
        }
        else
        {
            r=r+1;
        }
    }
    cout<<l+r+1<<endl;
    
    return 0;
}