#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    if(n%3==0 || n%3==1)
    {
        cout<<"1 1 "<<n-2<<endl;
    }
    else
    {
        cout<<"1 2 "<<n-3<<endl;
    }
    
    return 0;
}