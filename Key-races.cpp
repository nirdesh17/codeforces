#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int n=s*v1+2*t1;
    int m=s*v2+2*t2;
    if(n<m)
    {
        cout<<"First"<<endl;
    }
    else if(m<n)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    
    return 0;
}