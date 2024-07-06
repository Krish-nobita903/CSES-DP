#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
void solve() {
    int n,x;
    cin>>n>>x;
    int c[n];
    vector<int>dp(x+10,-1);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    dp[0] = 1;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-c[j]>=0 && dp[i-c[j]]>=0)
            {
                if(dp[i]==-1) dp[i] = 0;
                dp[i] = (dp[i] + dp[i-c[j]])%mod;
            }
        }
    }
    //for(int i : dp) cout<<i<<" ";
    cout<<(dp[x]== -1 ? 0 : dp[x])<<"\n";
}
 
signed main() {
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
