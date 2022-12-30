#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    ll n;
    cin>>n;
    string a;
    cin>>a;
    bool chk[8];
    for(ll i=0;i<8;i++)
    chk[i]=true;

    if(n==8){
        cout<<s[0]<<endl;
        return 0;
    }
    else if(n==6){
        cout<<s[3]<<endl;
        return 0;
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]=='.')
        continue;

        for(ll j=0;j<8;j++)
        {
            if(chk[j] && a[i]!=s[j][i])
            chk[j]=false;
        }
    }
    for(int i=1;i<8;++i)if(chk[i])
        cout<<s[i]<<endl;
    return 0;
}