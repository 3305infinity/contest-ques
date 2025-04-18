#include <bits/stdc++.h>
using namespace std;
//int f(vector<vector<int>>&dp,vector<int>&v,int i,int sum)
//{
//	if(sum==0 )
//	return 0;
//	if (i < 0 || sum < 0) 
//	return INT_MAX;
//	if(dp[i][sum]!=-1)
//	return dp[i][sum];
//	int exclude=f(dp,v,i-1,sum);
//	int include=INT_MAX;
//	if(v[i]<=sum)
//	include=1+f(dp,v,i,sum-v[i]);
//	return dp[i][sum]=min(include,exclude);
//}
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
    vector<vector<int>>dp(n+1,vector<int>(x+1,INT_MAX));
//    int c= f(dp,v,n-1,x);
//    if(c!=INT_MAX)
//    cout<<c<<endl;
//    else
//    cout<<-1<<endl;
     for(int i=0;i<=n;i++)
     {
     	dp[i][0]=0;
	 }
     for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=x;j++)
     	{
     		if(v[i-1]<=j &&  dp[i][j-v[i-1]]!=INT_MAX)
     		{
     		   dp[i][j]=min(dp[i-1][j],dp[i][j-v[i-1]]+1);	
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	 }
	 if(dp[n][x]==INT_MAX)
	 cout<<-1<<endl;
	 else
	 cout<<dp[n][x]<<endl;
}

