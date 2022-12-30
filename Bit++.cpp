#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(a=="X++" || a=="++X")
        {
            x=x+1;
        }
        else if(a=="X--" || a=="--X")
        {
            x=x-1;
        }
    }
    cout<<x;
    return 0;
}