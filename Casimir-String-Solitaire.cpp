#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        string s;
        cin>>s;
        cout<<(count(s.begin(),s.end(),'B')*2==s.size() ? "YES\n": "NO\n" )<<endl;
    }
    return 0;
}