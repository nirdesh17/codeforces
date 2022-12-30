#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll n;
    // cin>>n;
    // ll a=n%10,b=n/10;
    // ll sum,SUM;
    // if(a==0 || a==2 || a==6 || a==9)
    // sum=2;
    // else if(a==8)
    // sum=1;
    // else if(a==1)
    // sum=7;
    // else if(a==3 || a==4)
    // sum=3;
    // else if(a==5)
    // sum=4;
    // else 
    // sum=5;

    // if(b==0 || b==2 || b==6 || b==9)
    // SUM=2;
    // else if(b==8)
    // SUM=1;
    // else if(b==1)
    // SUM=7;
    // else if(b==3 || b==4)
    // SUM=3;
    // else if(b==5)
    // SUM=4;
    // else 
    // SUM=5;

    // cout<<sum*SUM<<endl;

    int n, v[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    cin >> n;
    cout << v[n / 10] * v[n % 10];
    return 0;
}