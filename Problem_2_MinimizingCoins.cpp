#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
void solve() {
    int n,x;
    cin>>n>>x;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    vector<int>dp(x+10,1e18);
    dp[0] = 0;
    sort(c,c+n);
    for(int i=1;i<min(c[0],x);i++) dp[i] = -1e18;
    for(int i=c[0];i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-c[j]>=0 && dp[i-c[j]]>=0)
            {
                dp[i] = min(dp[i],dp[i-c[j]]+1);
            }
        }
    }
    if(dp[x]==1e18 || dp[x]<0) dp[x] = -1;
    cout<<dp[x]<<"\n";
}
 
signed main() {
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
