#include<bits/stdc++.h>
using namespace std;

string str;

int call(string sub)
{
    int cnt=0;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]==sub[0] && str[i+1]==sub[1])
            cnt++;
    }
    return cnt;
}
  
int main()
{
    int maxi=0,n;
    cin>>n;
    cin>>str;
    string gram;
    for(int i=0;i<n-1;i++)
    {
        string sub=str.substr(i,2);

        int temp=call(sub);
        if(temp>maxi)
        {
            maxi=temp;
            gram=sub;
        }
    }
    cout<<gram<<endl;

    
    return 0;
}