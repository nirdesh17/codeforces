#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    string s;
    cin>>s;
    int counter1=0,counter2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            counter1++;
            counter2=0;
            if(counter1>=7)
            {
                break;
            }
        }
        else
        {
            counter2++;
            counter1=0;
            if(counter2>=7)
            {
                break;
            }
        }
    }
    if(counter1>=7 || counter2>=7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}