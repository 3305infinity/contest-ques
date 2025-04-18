#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,x;
    int mod=1e9+7;
    cin>>n>>x;
    vector<int>h(n);
    vector<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(h[i-1]<=j)
            {
                dp[i][j]=max(dp[i][j],dp[i-1][j-h[i-1]]+s[i-1]);
            }
        }
    }
    cout<<dp[n][x]<<endl;
}
