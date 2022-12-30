#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        string a[]={"a","b","c"};
        string s; //vector<string> s; 
        for(int j=0;j<k;j++)
        {
            s=s+'a';
        }
        int m=2;
        for(int j=0;j<n-k;j++)
        {
           s=s+a[m];
           m--;
           if(m==-1)
           m=2;
        }
       cout<<s<<endl;
    }
    return 0;
}