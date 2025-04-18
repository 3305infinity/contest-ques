#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int>&vis,vector<vector<int>>&graph,int node)
{
    vis[node]=1;
    for(auto it:graph[node])
    {
        if(!vis[it])
        dfs(vis,graph,it);
    }
}
int main() {
    int n,m;
    cin >> n>>m;
    vector<vector<int>>v(n+1);
    for(int i=0;i<m;i++)
    {
        int a,b;
    	cin>>a>>b;
    	v[a].push_back(b);
    	v[b].push_back(a);
	}
    vector<int>vis(n+1,0);
    vector<int>component;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            component.push_back(i);
            dfs(vis,v,i);
        }
    }
	cout<<component.size()-1<<endl;
	for(int i=1;i<component.size();i++)
	{
	    cout<<component[0]<<" "<<component[i]<<endl;
	}
    return 0;
}
