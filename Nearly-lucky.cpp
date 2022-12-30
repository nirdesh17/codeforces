#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a;
    int n=0;
    while(a>0)
    {
        b=a%10;
        if(b==4 || b==7)
        {
            n=n+1;
        }
        
        a=a/10;

    }
    if(n==4 || n==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}