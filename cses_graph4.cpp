#include <bits/stdc++.h>
using namespace std;

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
	vector<int>parent(n+1,-1);
	queue<int>q;
	vector<int> vis(n+1,0);
	q.push(1);
	vis[1]=1;
	bool found=false;
	while(!q.empty())
	{
	    int node=q.front();
	    q.pop();
	    if(node==n)
	    found=true;
	    for(auto it:v[node])
	    {
	        if(!vis[it])
	        {
	            vis[it]=1;
	            parent[it]=node;
	            q.push(it);
	        }
	    }
	}
	if(parent[n]==-1)
	{
	    cout<<"IMPOSSIBLE"<<endl;
	   return 0;
	}
	vector<int>path;
	for(int i=n;i!=1;i=parent[i])
	{
	    path.push_back(i);
	}
	path.push_back(1);
	reverse(path.begin(),path.end());
	cout<<path.size()<<endl;
	for(auto it:path)
	{
	    cout<<it<<" ";
	}
	cout<<endl;
}
