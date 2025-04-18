#include <bits/stdc++.h>
using namespace std;
int f(vector<vector<int>>&dp,vector<int>&v,int i,int sum)
{
    int mod=1e9+7;
    if (sum == 0) return 1; // Base case: one way to make sum 0 (use no coins)
    if (i < 0 || sum < 0) return 0;
	if(dp[i][sum]!=-1)
	return dp[i][sum];
	int nontake=f(dp,v,i-1,sum);
	int take=0;
	if(v[i]<=sum)
	take=f(dp,v,i,sum-v[i]);
	return dp[i][sum]=(nontake+take)%mod;
}
int main() 
{
    int n,x;
    int mod=1e9+7;
    cin >>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
    	cin>>v[i];
	}
    // vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    // int c= f(dp,v,n-1,x);
    // cout<<c<<endl;
    vector<int>dp(x+1,0);
    // for(int i=0;i<=n;i++)
    // dp[i][0]=1; 
    dp[0]=1;
    // for(int j=1;j<=x;j++)
    // {
    //     for(int i=1;i<=n;i++)
    //     {
    //         dp[i][j]=dp[i-1][j];
    //         if(v[i-1]<=j)
    //         {
    //             dp[i][j]=(dp[i][j] + dp[i][j - v[i-1]]) % 1000000007;
    //         }
    //     }
    // }
    // cout<< dp[n][x]<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=v[i];j<=x;j++)
        {
            dp[j]=(dp[j]+dp[j-v[i]])%mod;
        }
    }
    cout<<dp[x]<<endl;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int n,x;
//     int mod=1e9+7;
//     cin>>n>>x;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//     	cin>>v[i];
// 	}
// 	vector<int>dp(x+1,0);
// 	dp[0]=1;
//     for(int i=1;i<=x;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(v[j]<=i)
//             dp[i]=(dp[i]+dp[i-v[j]])%mod;
//         }
//     }
//     cout<<dp[x]<<endl;
// }
