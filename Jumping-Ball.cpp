#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    string s;
    char b='>',c='<';
    cin>>s;
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==b)
        {
            a++;
        }
        else
        {
            a--;
        }
    }
    cout<<abs(a)<<endl;
    return 0;
}