// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
  
// ll trap(vector<ll>& height) 
// {        
//     ll l=0,r=height.size()-1,water=0,mh=0;
//     while(l<r)
//     {
//         while(l<r && height[l]<=mh)
//         {
//         water+=mh-height[l++];
//         }
//         while(l<r && height[r]<=mh)
//         {
//         water+=mh-height[r--];
//         }
//         mh=min(height[l],height[r]);
//     }
//     return water;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,x;
//         cin>>n>>x;
//         vector<ll> a(n+2);
//         for(int i=1;i<n+1;i++)
//         {
//             cin>>a[i];
//         }
//         ll l=1,h=1e9+9;
//         while(l<h)
//         {
//             ll m=(l+h)>>1;
//             a[0]=m,a[n+1]=m;
//             if(trap(a)<=x)
//             {
//                 l=m+1;
//             }
//             else
//             {
//                 h=m-1;
//             }
//         }
//         cout<<l<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool solve(ll mid, vector<ll>& waterLevels, ll n, ll x) {
    ll total = 0;
    int i = 0;

    while (i < n) {
        if (waterLevels[i] <= mid) {
            total += mid - waterLevels[i];
        }

        if (total > x) {
            return false;
        }

        i++;
    }

    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> waterLevels(n);

        for (int i = 0; i < n; i++) {
            cin >> waterLevels[i];
        }

        ll low = 1; 
        ll high = LONG_MAX;
        ll result = -1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (solve(mid, waterLevels, n, x)) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}