#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
void solve() {
    int n;
    cin>>n;
    vector<int>dp(n+10);
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        if(i<=6) dp[i] = 1;
        if(i-1>=0) dp[i] = (dp[i]+dp[i-1])%mod;
        if(i-2>=0) dp[i] = (dp[i]+dp[i-2])%mod;
        if(i-3>=0) dp[i] = (dp[i]+dp[i-3])%mod;
        if(i-4>=0) dp[i] = (dp[i]+dp[i-4])%mod;
        if(i-5>=0) dp[i] = (dp[i]+dp[i-5])%mod;
        if(i-6>=0) dp[i] = (dp[i]+dp[i-6])%mod;
    }
    cout<<dp[n]<<"\n";
}
 
signed main() {
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
