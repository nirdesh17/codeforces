#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            break;
        }
        else
        {
            counter++;
        }
    }
    if(counter!=n)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>k)
            {
                break;
            }
            else
            {
                counter++;
            }
        }
    }

    cout<<counter<<endl;
    return 0;
}