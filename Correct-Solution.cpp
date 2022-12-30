#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,g;
    cin>>s;
    cin>>g;
    sort(s.begin(),s.end());
    if(s[0]=='0')
    {for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        continue;
        else
        {
            swap(s[0],s[i]);
            break;
        }
    }}
    if(s==g)
    cout<<"OK"<<endl;
    else
    cout<<"WRONG_ANSWER"<<endl;
    return 0;
}