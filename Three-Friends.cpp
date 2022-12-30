#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]<a[1])
        a[0]++;
        else if(a[0]==a[1] &&a[1]<a[2])
        {a[0]++;a[1]++;}
        if(a[1]<a[2])
        a[2]--;
        else if(a[2]==a[1] &&a[0]<a[1])
        {a[2]--;a[1]--;}

        cout<<abs(a[0]-a[1])+abs(a[0]-a[2])+abs(a[1]-a[2])<<endl;
    }
    return 0;
}