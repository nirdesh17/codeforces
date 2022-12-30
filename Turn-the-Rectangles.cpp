#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int a[n][2];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0;i<n-1;i++)
    {
        // if(a[i][0]>=a[i+1][0] || a[i][0]>=a[i+1][1] || a[i][1]>=a[i+1][0] || a[i][1]>=a[i+1][1])
        // {
        //     counter++;
        //     continue;
        // }
        // else
        // {
        //     break;
        // }
        if(max(a[i][0],a[i][1])>=min(a[i+1][0],a[i+1][1]))
        {
            counter++;
            continue;
        }
        else
        {
            break;
        }
    }
    if(counter!=n-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}