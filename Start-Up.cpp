#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    string s;
    char A='A',H='H',I='I',M='M',O='O',T='Y',U='U',V='V',X='X',Y='Y';
    cin>>s;
    long long a=s.length();
    long long counter=0;
    for(long long i=0;i<a;i++)
    {
        if((s[i]==s[a-1-i] ) && (s[i]==A || s[i]==H || s[i]==I || s[i]==M || s[i]==O || s[i]==Y || s[i]==U || s[i]==V || s[i]==X || s[i]==Y ))
        {
            counter++;
        }
    }
    if(counter==a && a>1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}