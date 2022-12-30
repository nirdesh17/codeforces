#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        test--;
        string s;
        int n;
        cin>>n;
        for(int i=0;i<n-2;i++)
        {
            string a;
            cin>>a;
            int b=-1;
            if(s[b+1]==a[0])
            {
                a.erase(remove(a.begin(),a.end(),a[0]),a.end());
                s=s+a;
                b++;
            }
            else
            {
                s=s+a;
                b++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}