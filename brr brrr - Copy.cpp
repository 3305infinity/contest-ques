#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    	cin>>n;
    	vector<vector<int>>v(n+1,vector<int>(n+1));
    	vector<int>a(2*n+1,0);
    	vector<int>vis(2*n+1,0);
    	for(int i=1;i<=n;i++)
    	{
    	    for(int j=1;j<=n;j++)
    	    {
    	        cin>>v[i][j];
    	        int x=i+j;
    	        if(!a[x])
    	        {
    	            a[x]=v[i][j];
    	            vis[v[i][j]]=1;
    	        }
    	    }
    	}
    	for(int i=1;i<=2*n;i++)
    	{
    	    if(vis[i]==0)
    	    {a[1]=i;break;}
    	}
    	cout<<a[1]<<" ";
    	for(int i=2;i<=2*n;i++)
    	cout<<a[i]<<" ";
    	cout<<endl;
	}
}
