#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                char b;
                cin>>b;
                if(b!='.')
                {
                    s.push_back(b);
                }
            }
        }
        cout<<s<<endl;
    }
    
    return 0;
}