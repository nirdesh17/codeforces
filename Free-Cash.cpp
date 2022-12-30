#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n][2];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    } 
    ll counter=1,max=1;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i][0]*60+a[i][1]==a[i+1][0]*60+a[i+1][1])
        {
            counter++;
            if(counter>max)
            {
                max=counter;
            }
        }
        else
        {
            counter=1;
        }

    }
    cout<<max<<endl;   
    return 0;
}