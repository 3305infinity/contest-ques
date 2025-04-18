#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,x;
    int mod=1e9+7;
    cin>>n;
    vector<vector<char>>v(n,vector<char>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    vector<vector<int>>vis(n,vector<int>(n,0));
    vector<vector<int>>dp(n,vector<int>(n,0));
    if (v[0][0] == '*') {
        cout << 0 << endl;
        return 0;
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vis[i][j]!=1 && v[i][j]!='*')
            {
                vis[i][j]=1;
                if(i>0)
                dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
                if(j>0)
                dp[i][j]=(dp[i][j]+dp[i][j-1])%mod;
            }
        }
    }
    cout<<dp[n-1][n-1]<<endl;
}
